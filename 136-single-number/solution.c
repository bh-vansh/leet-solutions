int singleNumber(int* nums, int numsSize) {
int n=0,i;
for(i=0;i<numsSize;i++)
{
    n=n^nums[i];
}
return n;
    
}
