int findGCD(int* nums, int numsSize) {
    int i;
    int min=1001,max=0;
    for(i=0;i<numsSize;i++)
    {
        int org=nums[i];
        if(org<min)
        {
            min=org;
        }
        if(org>max)
        {
            max=org;
        }
    }
    int gcd=max%min;
    while(gcd!=0)
    {
        max=min;
        min=gcd;
        gcd=max%min;
    }
    return min;
    
}