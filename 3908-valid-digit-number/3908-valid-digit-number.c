bool validDigit(int n, int x) {
    int i,num,count=0;
    while(n!=0)
    {
        num=n%10;
        if(num==x)
        {
            count=1;
        }
            n=n/10;
    }
    return count && num!=x;
}