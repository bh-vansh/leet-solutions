int arraySign(int* nums, int numsSize) {
    int i,sign=1;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            return 0;
        }
        else if(nums[i]<0)
        {
            sign*=-1;
        }
    }
    return sign;
}