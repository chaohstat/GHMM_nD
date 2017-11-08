function [b0, Pb, sum_U] = SREM_MAP(b,Y,DIC,W0,beta,exbetabar,Sigma_s,tau,MAP_iter)
%%  The EM algorithm
%---input---------------------------------------------------------
%   b: initial 2D or 3D labels p*n
%   Y1: image intensity matrix p*m
%   DIC: dictionary of spatial relationship
%   subind: subject information m*3
%   beta: initial value of beta q*p
%   betabar: initial value of betabar q*2
%   Sigma_s: initial value of variance matrix in epsilon 1*p
%   tau: initial value of tau in Gibbs distribution 1
%   MAP_iter: maximum number of iterations of the MAP algorithm
%---output--------------------------------------------------------
%   b0: final 2D or 3D labels

%   Copyright by Chao Huang, 2015/01/25
%%

[m,N0] = size(Y); sum_U_MAP = zeros(1,MAP_iter); cri = zeros(N0,1);
U0 = zeros(m,3,N0); U1 = zeros(m,3,N0); U = zeros(m,3,N0); Pb = zeros(3,N0,m);
indd = find(DIC~=0); nozeroind = DIC(indd); Ymat = zeros(size(DIC)); 
bmat = zeros(size(DIC)); 
for ii = 1:N0
    Yii = Y(:,ii); Ymat(indd) = Yii(nozeroind); W = exp(-0.5*abs(Ymat-Yii*ones(1,length(DIC(1,:)))));
    Yres = Yii-(W0(:,ii)'*beta)';
    for ll = 1:MAP_iter 
        U0(:,:,ii) = 0.5*Yres.^2./(Sigma_s')*ones(1,3)-Yres./(Sigma_s')*W0(:,ii)'*exbetabar+...
                    0.5./(Sigma_s')*(W0(:,ii)'*exbetabar).^2;
        for kk = 1:3
            bindd = real(bmat==kk); U1(:,kk,ii) = -sum(bindd.*W,2)*tau;
        end
        U(:,:,ii)=U0(:,:,ii)+U1(:,:,ii);
        [temp, btemp]=min(U(:,:,ii),[],2);
        b(:,ii) = btemp-1; bmat(indd) = b(nozeroind)+1;
        sum_U_MAP(ll)=sum(temp(:)); cri(ii) = sum_U_MAP(ll);
        if ll>=3 && std(sum_U_MAP(ll-2:ll))<0.01
            break;
        end
    end
     Pb(:,ii,:) = (exp(-U(:,:,ii))./(sum(exp(-U(:,:,ii)),2)*ones(1,3)))'; 
end

b0 = b; 
sum_U=mean(cri);
        
            
            
            
        

