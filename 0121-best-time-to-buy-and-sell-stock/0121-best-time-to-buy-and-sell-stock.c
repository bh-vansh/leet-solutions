int maxProfit(int* prices, int pricesSize) {
    int max_profit=0,i;
    int min=prices[0];
    for(i=1;i<pricesSize;i++)
    {
       int pri=prices[i];
       if(pri<min)
       {
        min=pri;
       }
       else if(pri-min>max_profit)
       {
            max_profit=pri-min;
       }
    }
    return max_profit;
    
}