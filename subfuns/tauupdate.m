function tau0 = tauupdate(tau,b,Y11DIC,N0,DIC,DICind)
for i=1:50
    [f1, f2] = taufun(tau,b,Y11DIC,N0,DIC,DICind);
    tautemp = tau-f1/f2; tau = tautemp; 
     if i>=3 && abs(tau-tautemp)<0.01
        break;
     end
end
tau0 = tau;