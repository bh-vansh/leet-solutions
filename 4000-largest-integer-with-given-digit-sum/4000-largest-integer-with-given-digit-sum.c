int largestInteger(int n, int s) {
    int num=0,l=s,a=0;
    while(a<n)
    {
        int digit=(l>=9)?9:l;
        num=num*10+digit;
        l=l-digit;
        a++;
    }
   return (l==0)?num:-1;
}