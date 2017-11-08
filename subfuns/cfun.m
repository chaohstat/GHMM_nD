function omega = cfun(w,beta,betabar,y,l)
T = length(y); c = zeros(1,T); btemp=l+1;
for j = 1:T
    if btemp==1
        c(j)=0;
    else
       c(j) = w(:,j)'*betabar(:,btemp-1);%*Diracfun(btemp,l-1);
    end
end
 omega = y'-w'*beta-c';
 