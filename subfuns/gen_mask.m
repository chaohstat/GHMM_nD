function [Yscale,Y,S,DIC,sub,origmask] = gen_mask(dataPath,imgsize,imgtype)
% [Yscale,Y,S,sub,origmask] = gen_mask(dataPath,niftPath,imgsize,imgtype)
%
% Get the mask image and the updated image data in the masked region.
%
% Add the path of the package NIFTI before run this function.
%
% Input
% dataPath: directory of the data folder. (note: no subfolders are contained in data path)
% imgsize: the dimension information of image data.
% imgtype: the format of image data (1 for nifti (.nii) and 2 for analyze (.hdr &.img))
%
% Output
% Yscale: scaled updated image data in the mask region: L*N matrix.
% Y: updated image data in the mask region: L*N matrix.
% S: the position information of all pixels in mask region: L*2 matrix.
% DIC: the position correlationship information of all pixels in mask region: L*4 matrix for 2D, L*6 matrix for 3D.
% sub: list of all the image data names, whose length is N.
% origmask: the binary matrix of mask region imgsize.
%
% $Revision: V1 $  $Date: 2015/01/18 $
% Original Author: Chao Huang
%
% References: Huang, C., Shan, L., Charles, C., Wirth, W., Niethammer, M., and Zhu, H.T.
% "Diseased Region Detection of Longitudinal Knee Magnetic Resonance Imaging
% Data" 2014. Submitted to IEEE Transactions on Medical Imaging.

%% record
sub = dir(fullfile(dataPath));
sub = {sub.name}';
sub= sub(3:end);

if imgtype==1
    mm = size(sub,1);
else
    sub=sub(2:2:end);
    mm = size(sub,1);
end
sumbin = zeros(imgsize);
imgdim = length(imgsize);

for tt=1:mm
    
    origFile = sprintf('%s/%s',dataPath,sub{tt});
    origimg = load_untouch_nii(origFile);
    orig = origimg.img;
    origbin = orig>0;
    sumbin = sumbin+origbin;
    
end

origmask = sumbin==mm;
if imgdim==2
    [I,J] = find(origmask>0); S = [I,J];
    lenI = length(I); DIC = zeros(lenI,4);
    for ll=1:lenI
        ind=1;
        for kk=1:lenI
            if (norm(S(ll,:)-S(kk,:))==1)
                DIC(ll,ind)=kk; ind=ind+1;
            end
        end
    end
else
    ink = find(origmask>0); [I,J,K] = ind2sub(size(origmask),ink); S = [I,J,K];
    lenI = length(I); DIC = zeros(lenI,6);
    for ll=1:lenI
        ind=1;
        for kk=1:lenI
            if (norm(S(ll,:)-S(kk,:))==1)
                DIC(ll,ind)=kk; ind=ind+1;
            end
        end
    end
end


Y = zeros(lenI,mm);

for tt=1:mm
    
    origFile1 = sprintf('%s/%s',dataPath,sub{tt});
    origimg1 = load_untouch_nii(origFile1);
    orig1 = origimg1.img;
    Y(:,tt) = orig1(origmask);
    
end

Yscale = Y/max(max(Y));

