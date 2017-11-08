function [betabar0] = bbarupdate(Y1,Pb1,W1,beta,Sigma_s,q)
betabar0 = zeros(q,2);
Scal1 = W1*diag(squeeze(Pb1(2,:,:))*(1./Sigma_s)')*W1'; 
Scal2 = W1*diag(squeeze(Pb1(3,:,:))*(1./Sigma_s)')*W1'; 
betatemp = W1*(Y1'-W1'*beta)*Sigma_s';
betabar0(:,1) = Scal1\betatemp;
betabar0(:,2) = Scal2\betatemp;