bool isFascinating(int n) {
    long long a=0,b=0;
    a=2*n;
    b=3*n;
    long long p1=1,p2=1;
    long long temp=a;
    while(temp>0)
    {
        p1*=10;
        temp/=10;
    } temp=b;
    while(temp>0)
    {
        p2*=10;
        temp/=10;
    }
    long long new=n*p1*p2+a*p2+b;
    int hash[10]={0};
    while(new>0)
    {
        hash[new%10]++;
        new/=10;
    }
    if(hash[0]>0)
    {
        return false;
    }
    for(int d=1;d<=9;d++)
    {
       if(hash[d]!=1)
       {
        return false;
       }
    }
    return true;
}