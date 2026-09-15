bool validDigit(int n, int x) {
    int i,num,count=0;
    while(n!=0)
    {
        num=n%10;
        if(num==x)
        {
            count++;
        }
            n=n/10;
    }
    return count>0 && num!=x;
}