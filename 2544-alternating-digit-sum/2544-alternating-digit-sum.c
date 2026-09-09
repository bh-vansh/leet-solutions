int alternateDigitSum(int n) {
    long rem=0,sign=1,sum=0,count=0;
    long org=n;
    while(n!=0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    if(count%2==0)
        {
            sign=-1;
        }
        else
        {
            sign=+1;
        }
    while(org!=0)
    {
        rem=org%10;
        org=org/10;
        sum=sum+sign*rem;
        sign=-sign;
    }
    return sum;
}