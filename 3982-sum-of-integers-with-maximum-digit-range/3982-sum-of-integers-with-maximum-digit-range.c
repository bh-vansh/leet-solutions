int maxDigitRange(int* nums, int numsSize) {
    int i,a,mr=0,sum=0;
    for(i=0;i<numsSize;i++)
    {
        int l=0,s=9;
        int b=nums[i];
        while(b!=0)
        {
            a=b%10;
            if(a>l)
            {
                l=a;
            }
            if(a<s)
            {
                s=a;
            }
            b=b/10;
        }
        int r=l-s;
        if(mr<r)
        {
            mr=r;
            sum=nums[i];
        }
        else if(r==mr)
        {
            sum=sum+nums[i];
        }
    }
    return sum;    
}