int numSquares(int n) {
    int i,j;
    int dp[n+1];
    for(i=0;i<=n;i++)
    {
        dp[i]=n+1;
    }
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j*j<=i;j++)
        {
            int sq=j*j;
            if(1+dp[i-sq]<dp[i])
            {
                dp[i]=1+dp[i-sq];
            }
            if(dp[i]==1)
            {
                break;
            }
        }
    }
    return dp[n];
}