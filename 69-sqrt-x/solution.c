int mySqrt(int x) 
{
    int i=1;
    if(x==0)
    {
        return 0;
    }
    while(i<=x)
    {
        if(i==x/i)
        {
            return i;
        }
        else if(i>x/i)
        {   
             i--;
            return i;
        }
        else
        {
            i++;
        }
    }
    return i;
}
