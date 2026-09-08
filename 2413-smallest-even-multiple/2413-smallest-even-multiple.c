int smallestEvenMultiple(int n) {
    int i;
    if(n%2==0)
    {
        return n;
    }
    for(i=n;i>=n;i++)
    {
        if(i%n==0)
        {
            return n*2;
        }
    }
    return n*2;
}