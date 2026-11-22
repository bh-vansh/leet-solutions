char findTheDifference(char* s, char* t) {
    int i;
    int alpha[26]={0};
    for(i=0;s[i]!='\0';i++)
        {
            alpha[s[i]-'a']--;
        }
    for(i=0;t[i]!=0;i++)
        {
            alpha[t[i]-'a']++;
        }
    for(i=0;i<26;i++)
    {
        if(alpha[i]==1)
        {
            return 'a'+i;
        }
    }
    return '\0';    
}