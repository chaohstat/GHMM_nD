function [beta0, Sigma_s0] = bSSupdate(Y1,Pb,W1,beta,exbetabar,q)
[m,N1] = size(Y1); beta0 = zeros(q,m); Sigma_s0 = zeros(1,m); 
for ll = 1:m
    z = Y1(ll,:)'-diag(W1'*exbetabar*Pb(:,:,ll));
    beta0(:,ll) = W1*W1'\W1*z(:,1);
    Sigma_s0(ll) = (z-W1'*beta(:,ll))'*(z-W1'*beta0(:,ll))/N1;
end