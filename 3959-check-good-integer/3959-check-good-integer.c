bool checkGoodInteger(int n) {
 int l,sum=0,Ssum=0,k;
 while(n!=0)
 {
    int org=n;
    l=org%10;
    sum=sum+l;
    org=org/10;
    k=n%10;
    Ssum=Ssum+k*k;
    n=n/10;
 }   
 return Ssum-sum>=50;
}