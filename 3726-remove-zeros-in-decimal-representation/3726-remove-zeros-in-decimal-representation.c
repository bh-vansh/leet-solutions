long long removeZeros(long long n) {
    long long a=0,b=0,num,rev;
    while(n!=0)
    {
        num=n%10;
        if(num!=0)
        {
            a=a*10+num;
        }
        n=n/10;
    }
    while(a!=0)
    {
        rev=a%10;
        b=b*10+rev;
        a=a/10;
    }
    return b;
}