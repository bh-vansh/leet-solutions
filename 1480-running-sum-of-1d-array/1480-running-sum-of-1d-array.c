/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i,sum=0;
    int *result=malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
        result[i]=sum;
    }
    *returnSize=numsSize;
    return result;    
}