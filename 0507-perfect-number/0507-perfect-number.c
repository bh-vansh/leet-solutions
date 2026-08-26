bool checkPerfectNumber(int num) {
    int i,k=1,r;
    if(num==1)
    {
        return false;
    }
    for(i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                r=num/i;
                if(num/i==i)
                {
                    k+=r;
                }
                else
                {
                    k+=r+i;
                }
            }
        }
    return num==k;
    
}