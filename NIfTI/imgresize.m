function ytemp2 = imgresize(x,newsiz)

siz = size(x);

for k = 1:3
    d0 = siz(k);
    if k==1
        d1 = [2 3]; siz0 = siz(d1); newsiz0 = newsiz(d1); ytemp = zeros([d0 newsiz0]);
        if norm(siz0-newsiz0)~=0
            for i=1:d0
                ytemp(i,:,:)=imresize(x(i,:,:),newsiz0);
            end
        end
        siz = size(ytemp);
    elseif k==2
        d1 = [1 3]; siz0 = siz(d1); newsiz0 = newsiz(d1); ytemp1 = zeros(newsiz0);
        if norm(siz0-newsiz0)~=0
            for i=1:d0
                ytemp1(:,i,:)=imresize(ytemp(:,i,:),newsiz0);
            end
        end
    else d1 = [1 2]; siz0 = siz(d1); newsiz0 = newsiz(d1); ytemp2 = zeros(newsiz0);
        if norm(siz0-newsiz0)~=0
            for i=1:d0
                ytemp2(:,:,i)=imresize(ytemp1(:,:,i),newsiz0);
            end
        end
    end
end

end