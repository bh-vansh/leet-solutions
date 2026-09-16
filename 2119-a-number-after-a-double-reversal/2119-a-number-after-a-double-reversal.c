bool isSameAfterReversals(int num) {
    //brute force:
    // int a,b,rev=0,rev2=0;
    // int org=num;
    // while(num!=0)
    // {
    //     a=num%10;
    //     rev=rev*10+a;
    //     num=num/10;
    // }
    // while(rev!=0)
    // {
    //     b=rev%10;
    //     rev2=rev2*10+b;
    //     rev=rev/10;
    // }
    // if(rev2==org) 
    // {
    //     return true;
    // }  
    // else 
    // {
    //     return false;
    // }
    
    //optimized soln:
    return num==0||num%10!=0;
}