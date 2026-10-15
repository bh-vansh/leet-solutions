int sumOfUnique(int* nums, int numsSize) {
    int i;
    int hash[101]={0};
    for(i=0;i<numsSize;i++)
    {
        hash[nums[i]]++;
    }
    int sum=0;
    for(i=0;i<=100;i++)
    {
        if(hash[i]==1)
        {
            sum+=i;
        }
    }
    return sum;
}