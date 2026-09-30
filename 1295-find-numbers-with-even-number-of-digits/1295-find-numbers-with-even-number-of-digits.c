int findNumbers(int* nums, int numsSize) {
    int i,a,b=0;
    for(i=0;i<numsSize;i++)
    {
        int count=0;
        while(nums[i]!=0)
        {
        a=nums[i]%10;
        count++;
        nums[i]=nums[i]/10;
        }
        if(count%2==0)
        {
            b++;
        }
    }
    return b;
}