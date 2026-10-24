char* toHex(int num) {
    char *nums=malloc(20);
    char hex[]="0123456789abcdef";
    unsigned n=num;
    int i=0,j;
    while(n!=0)
    {
        nums[i]=hex[n%16];
        n=n/16;
        i++;
    }
    if(i == 0)
    {
    nums[i++] = '0';
    }
    nums[i]='\0';
    for(j=0;j<i/2;j++)
    {
        char temp=nums[j];
        nums[j]=nums[i-1-j];
        nums[i-1-j]=temp;
    }
    return nums;
}