int minimumOperations(int* nums, int numsSize) {
    int i;
    int count=0;
    for(i=0;i<numsSize;i++)
    {
        int org=nums[i];
        if(org%3==0)
        {
            continue;
        }
        else if(org%3==1)
        {
            org=org-1;
            count++;
        }
        else if(org%3==2)
        {
            org=org+1;
            count++;
        }
    }
    return count;
}