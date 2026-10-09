/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int*sum=malloc(n*sizeof(int));
    int i,index=0;
    int start=-n/2;
    for(i=start;i<=n/2;i++)
    {
        if(i==0&&n%2==0)
        {
            continue;
        }
        sum[index++]=i;
    }
    *returnSize=n;
    return sum;
}