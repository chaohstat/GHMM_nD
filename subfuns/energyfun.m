function G = energyfun(i,kk,b,DIC)

b(i) = kk-1; 
sindtp = DIC(i,:)~=0; sind=DIC(i,sindtp);
G =  -length(find(b(sind)==b(i)));

