clc;
clear all;

%% define path

home_dir = pwd;

simu_data_Path=sprintf('%s/simu_data',home_dir);
simusettingPath=sprintf('%s/simu_setting_data',home_dir);
initial_value_Path=sprintf('%s/initial_value',home_dir);
result_Path=sprintf('%s/result',home_dir);
niftiPath=sprintf('%s/NIfTI',home_dir);
subfunPath=sprintf('%s/subfuns',home_dir);
label_Path=sprintf('%s/result/labelimg',home_dir);

%% add path
path(path,niftiPath);
path(path,subfunPath);

%% load the parameter settings
load(sprintf('%s/X.mat',simu_data_Path))
load(sprintf('%s/S.mat',simusettingPath))
load(sprintf('%s/origmask.mat',simusettingPath))
load(sprintf('%s/DIC.mat',simusettingPath))

%% load the simulated data
load(sprintf('%s/Ysimu.mat',simu_data_Path))
% load(sprintf('%s/b0.mat',simu_data_Path))

%% other information settings
n = size(X,1); n0=27; n1=n-n0;
diaginfo=[zeros(n0,1);2*ones(10,1);ones(10,1);2*ones(10,1)]; 
infotemp=1:n;
info=[infotemp' diaginfo X];

%% parameter initial value settings

% tau and alphabar
tau0 = 0.1; alphabar0= -[0.03 0.01 0.01 0.01; 0.05 0.02 0.02 0.02]';      

% beta, sigma_s and sigma_v 
p=length(Ysimu(:,1)); Y0=Ysimu(:,1:n0); X0=X(1:n0,:); 
beta1 = zeros(4,p); Sigma_s1 = zeros(1,p); 

%% Start a parallel pool
for jj=1:p
    y=Y0(jj,1:n0)';
    [beta1(:,jj),Sigma_s1(jj)]=mvregress(X0,y);
end

% run in advance, then load the results
save(sprintf('%s/beta1.mat',initial_value_Path),'beta1')
save(sprintf('%s/Sigma_s1.mat',initial_value_Path),'Sigma_s1')


% label b

% tb0 = zeros(p,n1); Y1=Ysimu(:,(n0+1):end); info1=info((n0+1):end,:);
% 
% for ii=1:n1
%     data = Y1(:,ii)-(X(ii+n0,:)*beta1)';
%     ind1 = find(data<0); dataclus0 = data(ind1); [C, ~, btemp0] = km(dataclus0, 3, 1e-6);
%     [~,I0] = sort(mean(C,2)); btemp01 = find(btemp0==I0(1));
%     if info1(ii,2)==1
%         tb0(ind1(btemp01),ii) = 1;
%     elseif info1(ii,2)==2
%         tb0(ind1(btemp01),ii) = 2;
%     end
% end
% 
% save(sprintf('%s/tb0.mat',initial_value_Path),'tb0')

load(sprintf('%s/b0.mat',simu_data_Path)); tb0=b0(:,28:57);

tic;
EM_iter = 2; MAP_iter = 1; 

[b, beta, betabar, Sigma_s, tau] = SREM_EM_mex(tb0,Ysimu,DIC,info,beta1,alphabar0,Sigma_s1,tau0,EM_iter,MAP_iter);
toc;
save(sprintf('%s/b.mat',result_Path),'b'); 
save(sprintf('%s/beta.mat',result_Path),'beta'); save(sprintf('%s/betabar.mat',result_Path),'betabar');
save(sprintf('%s/Sigma_s.mat',result_Path),'Sigma_s'); 
save(sprintf('%s/tau.mat',result_Path),'tau');

for ii=1:n1
    simuimg=double(origmask);
   for jj=1:p
       simuimg(S(jj,1),S(jj,2),S(jj,3))=simuimg(S(jj,1),S(jj,2),S(jj,3))+b(jj,ii)*5;
   end
     dsimg = make_nii(simuimg);
    ee = sprintf('%s/b%i.img',label_Path,ii);
    save_nii(dsimg,ee);
end

toc;
