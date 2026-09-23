int countTriples(int n) {
    
    int a,b,c,count=0;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            c=sqrt(a*a+b*b);
            if(c<=n&&c*c==(a*a+b*b))
            {
                count++;
            }
        }    
    }
    return count;
}