int nthUglyNumber(int n) {
    int ugly[n];
    ugly[0]=1;
    int p2=0,p3=0,p5=0;
    int i=1,a,b,c;
    while(i<n)
    {
        a=ugly[p2]*2;
        b=ugly[p3]*3;
        c=ugly[p5]*5;
        if(a<=b&&a<=c)
        {
            ugly[i]=a;
        }
        else if(b<=a&&b<=c)
        {
            ugly[i]=b;
        }
        else
        {
            ugly[i]=c;
        }
        p2+=(ugly[i]==a);
        p3+=(ugly[i]==b);
        p5+=(ugly[i]==c);
        i++;
    }
    return ugly[n-1];

    
    // int count=0,num=1;
    // int temp;
    // while(count<n)
    //     {
    //         temp=num;
    //         while(temp%2==0)
    //             {
    //                 temp=temp/2;
    //             }
    //         while(temp%3==0)
    //             {
    //                 temp=temp/3;
    //             }
    //         while(temp%5==0)
    //             {
    //                 temp=temp/5;
    //             }
    //         if(temp==1)
    //         {
    //                 count++;
    //         }
    //         if(count==n)
    //         {
    //             return num;
    //         }
    //         num++;
    // }
    // return num;
    
}