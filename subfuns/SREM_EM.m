function [b0, beta0, betabar0, Sigma_s0, tau0, sum_U]=SREM_EM(b,Y1,DIC,subind1,beta,betabar,Sigma_s,tau,EM_iter,MAP_iter)
%%  The EM algorithm
%---input---------------------------------------------------------
%   b: initial 2D or 3D labels p*n1, n1: number of pateint
%   Y1: image intensity matrix p*m
%   DIC: dictionary of spatial relationship
%   subind1: subject information m*(2+q)
%   beta: initial value of beta q*p
%   betabar: initial value of betabar q*2
%   Sigma_s: initial value of variance matrix in epsilon 1*p
%   tau: initial value of tau in Gibbs distribution 1
%   EM_iter: maximum number of iterations of the EM algorithm
%   MAP_iter: maximum number of iterations of the MAP algorithm
%---output--------------------------------------------------------
%   b0: final 2D or 3D labels
%   beta0: final vector of beta  q*p
%   betabar0: final vector of betabar  q*2
%   Sigma_s0: final value of variance matrix in epsilon  1*p
%   tau0: final value of tau in Gibbs distribution  1
%   sum_U: energy function

%   Copyright by Chao Huang, 2015/01/23

sum_U = zeros(1,EM_iter);

[m,N1] = size(Y1); W1 = subind1(:,3:end)'; inx1 = subind1(:,2)~=0; Y11 = Y1(:,inx1); W11 = W1(:,inx1);

Pb = zeros(3,N1,m); N11 = length(Y11(1,:));

q=length(beta(:,1)); exbetabar = [zeros(q,1) betabar];  

unzeroDIC=DIC~=0; sumDIC = double(sum(unzeroDIC,2)); DICind = find(sumDIC==6); Y11DIC=Y11(DICind,:);


for it=1:EM_iter
    
    %% E step: calculating expectations
    
    %% update b
    [btemp, Pb1, sum_U(it)] = SREM_MAP(b,Y11,DIC,W11,beta,exbetabar,Sigma_s,tau,MAP_iter);
    
    Pb(:,inx1,:) = Pb1;

    
    %% M step: update beta, betabar, Sigma_v, Sigma_s and tau
    
    [beta, Sigma_s] = bSSupdate(Y1,Pb,W1,beta,exbetabar,q);
    
    % update betabar
    
    betabar = bbarupdate(Y11,Pb1,W11,beta,Sigma_s,q);
    
    % update tau
    tau = tauupdate(tau,btemp,Y11DIC,N11,DIC,DICind);
    
    b = btemp;
    
    if it>=3 && std(sum_U(it-2:it))<0.01
        break;
    end
end

b0 = b; beta0 = beta; betabar0 = betabar; Sigma_s0 = Sigma_s; tau0 = tau;
