/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize) {
    int a,b;
    for(a=1;a<n;a++)
    {
        b=n-a;
        int temp=a;
        int temp2=b;
        int digit=0,digit2=0;
        int count=0,count2=0;
        while(temp>0)
        {
            digit=temp%10;
            if(digit==0)
            {
                count=1;
                break;
            }
            temp=temp/10;
        }
        while(temp2>0)
        {
            digit2=temp2%10;
            if(digit2==0)
            {
                count2=1;
                break;
            }
            temp2=temp2/10;
        }
        if(count==0&&count2==0)
        {
           int *sum=malloc(2*sizeof(int));
           sum[0]=a;
           sum[1]=b;
           *returnSize=2;
           return sum; 
        }
    }
    return NULL;
}