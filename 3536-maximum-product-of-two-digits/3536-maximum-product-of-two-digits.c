int maxProduct(int n) {
    int rev,a=0,b=0;
    while(n!=0)
    {
        rev=n%10;
        if(rev>a)
        {
            b=a;
            a=rev;
        }
        else if(rev>b)
        {
            b=rev;

        }
        n=n/10;
    }
    return a*b;
    
}