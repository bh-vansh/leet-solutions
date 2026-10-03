int maximumProduct(int* nums, int numsSize) {
    int i,pro1,pro2;
    int max1=-1001,max2=-1001,max3=-1001;
    int min1=1001,min2=1001;
    for(i=0;i<numsSize;i++)
    {
        int org=nums[i];
        if(max1<org)
        {
            max3=max2;
            max2=max1;
            max1=org;
        }
        else if(org>max2)
        {
            max3=max2;
            max2=org;
        }
        else if(org>max3)
        {
            max3=org;
        }
        if(min1>org)
        {
            min2=min1;
            min1=org;
        }
        else if(org<min2)
        {
            min2=org;
        }
    }
    pro1=max1*max2*max3;
    pro2=min1*min2*max1;
    return pro1>pro2?pro1:pro2;
}