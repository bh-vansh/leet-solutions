int numberOfCuts(int n) {
    int total;
    if(n%2==0)
    {
        total=n/2;
    }
    else if(n==1)
    {
        return 0;
    }
    else
    {
        total=n;
    }
    return total;
    
}