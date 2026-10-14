int gcdOfOddEvenSums(int n) {
    int seven,sodd,gcd;
        sodd=n*n;
        seven=n*(n+1);
        gcd=sodd%seven;
        while(gcd!=0)
        {
            sodd=seven;
            seven=gcd;
            gcd=sodd%seven;
        }
        return seven;
    
}