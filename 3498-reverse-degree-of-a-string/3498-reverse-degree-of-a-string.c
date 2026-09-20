int reverseDegree(char* s) {
    int sum=0,i,rev,post,product;
    for(i=0;s[i]!='\0';i++)
    {
        rev=26-(s[i]-'a');
        post=i+1;
        product=rev*post;
        sum=product+sum;
    }
    return sum;
}