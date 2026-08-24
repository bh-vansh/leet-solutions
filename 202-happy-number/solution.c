bool isHappy(int n) {
    int r=0,t=0;
    while(n!=1 && n!=4)
    {
        while(n!=0)
        {
            r=n%10;
            r=r*r;
            n=n/10;
            t=t+r;
        }
        n=t;
        t=0;
    }
   
    if(n==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
