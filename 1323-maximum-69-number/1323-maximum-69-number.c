int maximum69Number (int num) {
    int i,a,org=num;
    int post=-1,position=0;
    while(org!=0)
    {
        a=org%10;
        if(a==6)
        {
            post=position;
        }
        position++;
        org=org/10;
    }
    if(post!=-1)
    {
        int mult=1;
        for(i=0;i<post;i++)
    {
        mult=mult*10;
    }    
        num=num+3*mult;
    }
    return num;
}