int sumOfTheDigitsOfHarshadNumber(int x) {
    int num,sum=0,org=x;
    while(x!=0)
    {
        num=x%10;
        x=x/10;
        sum=num+sum;
    }
    if(org%sum==0)
    {
        return sum;
    }    
    else
    {
        return -1;
    }
}