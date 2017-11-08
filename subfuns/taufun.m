function [f1,f2] = taufun(tau,b,Y11DIC,N0,DIC,DICind)
f1 = 0; f2 = 0; LnPL = 0;
for ii=1:N0
    b0=b(:,ii); y=Y11DIC(:,ii);
    for kk=1:length(DICind)
        sind = find(DIC(DICind(kk),:)==1); ytemp=y(sind)-y(kk); Dis=exp(-0.5*abs(ytemp));
        ub = Dis'*real(b0(sind)==b0(kk));
        ub1 = Dis'*real(b0(sind)==0);
        ub2 = Dis'*real(b0(sind)==1);
        ub3 = Dis'*real(b0(sind)==2);
        LnPL = LnPL+ub*tau-log(exp(tau*ub1)+exp(tau*ub2)+exp(tau*ub3));
        f1 = f1+ub-(ub1*exp(tau*ub1)+ub2*exp(tau*ub2)+ub3*exp(tau*ub3))/(exp(tau*ub1)+exp(tau*ub2)+exp(tau*ub3));
        f2 = f2-(ub1^2*exp(tau*ub1)+ub2^2*exp(tau*ub2)+ub3^2*exp(tau*ub3))/(exp(tau*ub1)+exp(tau*ub2)+exp(tau*ub3))...
            +(ub1*exp(tau*ub1)+ub2*exp(tau*ub2)+ub3*exp(tau*ub3))^2/(exp(tau*ub1)+exp(tau*ub2)+exp(tau*ub3))^2;
    end
end