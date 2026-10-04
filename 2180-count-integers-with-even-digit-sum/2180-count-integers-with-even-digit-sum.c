int countEven(int num) {
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        int q=i,sum=0;
        while(q!=0)
        {
        sum+=q%10;
        q=q/10;
        }
        if(sum%2==0)
        {
            count++;
        }
    }
    return count;
}