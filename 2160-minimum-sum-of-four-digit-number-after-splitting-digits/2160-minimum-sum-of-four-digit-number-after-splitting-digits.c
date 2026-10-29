int minimumSum(int num) {
    int count[10]={0};
    int n1=0,n2=0,d=0;
    int turn=0;
    while(num>0)
    {
        count[num%10]++;
        num/=10;
    }
    for(d=0;d<=9;d++)
    {
        while(count[d]>0){
        if(turn==0)
        {
            n1=n1*10+d;
        }
        else
        {
            n2=n2*10+d;
        }
        count[d]--;
        turn=1-turn;
        }
    }
    return n1+n2;    
}