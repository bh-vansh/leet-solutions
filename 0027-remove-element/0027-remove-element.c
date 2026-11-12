int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    int i;
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if(n!=val)
        {
            nums[count]=n;
            count++;
        }
    }
    return count;
}