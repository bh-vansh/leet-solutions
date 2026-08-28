int subtractProductAndSum(int n) {
    int sum=0,product=1,rem=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        product=product*rem;
    }
    return product-sum;
}