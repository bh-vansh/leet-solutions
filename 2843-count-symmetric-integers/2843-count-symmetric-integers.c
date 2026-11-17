int countSymmetricIntegers(int low, int high) 
{ 
    int count=0;
    int i;
    for(i=low;i<=high;i++)
    {
        int temp=i;
        int digit=0;
        int s1=0,s2=0;
        while(temp>0)
        {
            digit++;
            temp/=10;
        }
        if(digit%2!=0)
        {
            continue;
        }
        temp=i;
        for(int j=0;j<digit/2;j++)
        {
            s2+=temp%10;
            temp/=10;
        }
        for(int j=0;j<digit/2;j++)
        {
            s1+=temp%10;
            temp/=10;
        }
        if(s1==s2)
        {
            count++;
        }
    }
return count;
}