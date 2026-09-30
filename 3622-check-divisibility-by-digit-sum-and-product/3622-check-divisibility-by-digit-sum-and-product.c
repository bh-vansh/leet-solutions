bool checkDivisibility(int n) {
    int a,sum=0,pro=1,new=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        pro=pro*a;
        n=n/10;
    }
    return new%(sum+pro)==0;
    
}