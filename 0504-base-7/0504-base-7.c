char* convertToBase7(int num) {
    int i=0,neg=(num<0);
    char*rep=malloc(26*sizeof(char));
    if(rep==NULL)
    {
        return NULL;
    }
    if(neg)
    {
        num=-num;
    }
    if(num==0)
    {
        rep[0]='0';
        rep[1]='\0';
        return rep;
    }
    while(num!=0)
    {
        int n;
        n=num%7;
        rep[i]='0'+n;
        i++;
        num/=7;
    }
    if (neg){
        rep[i++] = '-';
    }
    rep[i]='\0';
    int s=0,e=i-1;
    while(s<e)
    {
        int temp=rep[s];
        rep[s]=rep[e];
        rep[e]=temp;
        s++;
        e--;
    }
    return rep;
    
}