int findLucky(int* arr, int arrSize) {
    int i;
    int hash[501]={0};
    for(i=0;i<arrSize;i++)
    {
        hash[arr[i]]++;
    }
    for(i=500;i>=1;i--)
    {
        if(hash[i]==i)
        {
            return i;
        }
    }
    return -1;
}