int lengthOfLastWord(char* s) {
    int i;
    int count=0;
    while(s[i]!='\0')
    {
        i++;
    }
    while(i>0&&s[i-1]==' ')
    {
        i--;
    }
    while(i>0&&s[i-1]!=' ')
    {
        i--;
        count++;
    }
    return count;
}