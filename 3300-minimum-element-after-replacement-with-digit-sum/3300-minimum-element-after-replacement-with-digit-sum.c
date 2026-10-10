int minElement(int* nums, int numsSize) {
    int i;
    int min=100000;
    for(i=0;i<numsSize;i++)
    {
        int org=nums[i],sum=0;
        while(org!=0)
        {
            sum+=org%10;
            org=org/10;
        }
        nums[i]=sum;
        if(nums[i]<min)
    {
        min=nums[i];
    }
    }
    return min;
    
}