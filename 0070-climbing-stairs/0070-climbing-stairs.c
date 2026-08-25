int climbStairs(int n) {
    int a=1,b=2,next=0,i=3;
    if(n<i)
    {
        b=n;
    }
    while(i<=n)
    {
        next=a+b;
        a=b;
        b=next;
        i++;
    }
    return b;
    
}