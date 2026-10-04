int differenceOfSums(int n, int m) {
    int i,n2=0,n1=0;
    for(i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            n2+=i;
        }
        else if(i%m!=0)
        {
            n1+=i;
        }
    }
    return n1-n2;
    
}