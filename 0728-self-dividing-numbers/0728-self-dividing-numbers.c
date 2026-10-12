/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i;
    int range=right-left+1;
    int *arr=malloc(range*sizeof(int));
    *returnSize=0;
    for(i=left;i<=right;i++)
    {
        int num=i,org=i,a;
        int valid=1;
        while(num!=0)
        {
            a=num%10;
            if(a==0||org%a!=0)
            {
                valid=0;
                break;
            }
            num/=10;
        }
        if(valid)
        {
            arr[(*returnSize)++]=org;
        }
    }
    return arr;
    
}