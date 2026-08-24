int addDigits(int num) {
    
    int i,r,t,T,I,R;
    if(num==0)
    {
        return 0;
    }
    else if(num<10)
    {
        return num;
    }
    else if(num>=10)
    {
        i=num/10;
        r=num%10;
        t=i+r;
    }
    while(t>=10)
    {
        I=t%10;
        R=t/10;
        T=I+R;
        t=T;
    }
    return t;
}
