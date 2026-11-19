int getLeastFrequentDigit(int n) {
    int digit[10]={0};
    if(n==0)
    {
        return 0;
    }
    while(n!=0)
    {
        int a=n%10;
        digit[a]++;
        n/=10;
    }
    int min=11;
    int max=-1;
    for(int i=0;i<=9;i++)
    {
        int m=digit[i];
        if(m>0&&m<min)
        {
            min=digit[i];
            max=i;
        }
    }
    return max;
    
}