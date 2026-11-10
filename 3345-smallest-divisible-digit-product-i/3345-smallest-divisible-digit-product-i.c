int smallestNumber(int n, int t) {
    while(1)
    {
        int new=n;
        int a=1;
        while(new!=0)
        {
        a*=new%10;
        new/=10;
        }
        if(a%t==0)
        {
            return n;
        }
        else
        {
            n++;
        }
    }
    return n;
}