function [Yscale,Y,S,sub,origmask] = gen_mask1(dataPath,imgsize,imgtype)
% [Yscale,Y,S,sub,origmask] = gen_mask1(dataPath,niftPath,imgsize,imgtype)
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
mm = size(sub,1);
sumbin = zeros(imgsize);
imgdim = length(imgsize);

for tt=1:mm
    subdataPath=sprintf('%s/%s',dataPath,sub{tt});
    sub1 = dir(fullfile(subdataPath));
    sub1 = {sub1.name}';
    sub1 = sub1(3:end);
    if imgtype==2
        sub1 = sub1(2:2:end);
    end
    L(tt) = size(sub1,1);
    for ll=1:L(tt)
        origFile = sprintf('%s/%s/%s',dataPath,sub{tt},sub1{ll});
        origimg = load_untouch_nii(origFile);
        orig = origimg.img;
        origbin = orig>0;
        sumbin = sumbin+origbin;
    end
end

origmask = sumbin==sum(L);
if imgdim==2
    [I,J] = find(origmask>0); S = [I,J];
else
    [I,J,K] = find(origmask>0); S = [I,J,K];
end
lenI = length(I); Y = zeros(lenI,sum(L));

for tt=1:mm
    subdataPath=sprintf('%s/%s',dataPath,sub{tt});
    sub1 = dir(fullfile(subdataPath));
    sub1 = {sub1.name}';
    sub1 = sub1(3:end);
    if imgtype==2
        sub1 = sub1(2:2:end);
    end
    L(tt) = size(sub1,1);
    for ll=1:L(tt)
        origFile = sprintf('%s/%s/%s',dataPath,sub{tt},sub1{ll});
        origimg1 = load_untouch_nii(origFile);
        orig1 = origimg1.img;
        Y(:,tt) = orig1(origmask);
    end
end

Yscale = Y/max(max(Y));

