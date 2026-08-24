bool isPowerOfFour(int n) {
    while(n%4==0&&n>=1)
    {
        n=n/4;
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
