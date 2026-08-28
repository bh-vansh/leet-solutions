bool isThree(int n) {
    int m,k=1,count=0;
    for(m=1;m<=n;m++)
    {
        if(n%m==0)
        {
            count++;
        }
    }
    return count==3;
}
    