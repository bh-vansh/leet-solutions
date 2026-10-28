int splitNum(int num){
    int count[10]={0};
    int digit=0;
    int turn=0;
    int d1=0,d2=0;
    while(num>0)
    {
        count[num%10]++;
        num/=10;
    }
    for(digit=0;digit<=9;digit++)
    while(count[digit]>0)
    {
        if(turn==0)
        {
            d1=d1*10+digit;
        }
        else
        {
            d2=d2*10+digit;
        }
        count[digit]--;
        turn=1-turn;
    }
    return d1+d2;
}
    
