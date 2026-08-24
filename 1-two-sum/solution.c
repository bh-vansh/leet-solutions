/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i,j;
    int *result= (int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            if(i==j) continue;
            if(nums[i]+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
