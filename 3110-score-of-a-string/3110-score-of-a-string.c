int scoreOfString(char* s) {
    char i,j;
    int diff,score=0;
    for(i=0;s[i+1]!='\0';i++)
    {
        diff=s[i]-s[i+1];
        if(diff<0)
        {
            diff=-diff;
        }
        score+=diff;
    }
    return score;
}