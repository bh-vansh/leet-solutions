int maxNumberOfBalloons(char* text) {
    int hash[26]={0};
    int i;
    for(i=0;text[i]!='\0';i++)
    {
        hash[text[i]-'a']++;
    }
    int b=hash['b'-'a'];
    int a=hash['a'-'a'];
    int l=hash['l'-'a']/2;
    int o=hash['o'-'a']/2;
    int n=hash['n'-'a'];
    int ans=b<a?b:a;
    ans=ans<l?ans:l;
    ans=ans<o?ans:o;
    ans=ans<n?ans:n;
    return ans;
}