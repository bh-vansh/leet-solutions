int differenceOfSum(int* nums, int numsSize) {
    int n,i,l=0,sum=0;
    for(i=0;i<numsSize;i++)
    {
        int org=nums[i];
        while(org!=0)
        {
            n=org%10;
            l=l+n;
            org=org/10;
        }
        sum=sum+nums[i];
    }
    return sum-l;
    
    
}