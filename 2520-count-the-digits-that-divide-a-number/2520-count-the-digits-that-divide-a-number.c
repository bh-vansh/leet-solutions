int countDigits(int num) {
    int count=0,new,org=num;
        while(num!=0)
        {
        new=num%10;
        if(org%new==0)
        {
            count++;
        }
        num=num/10;
        }
    return count;
    
}