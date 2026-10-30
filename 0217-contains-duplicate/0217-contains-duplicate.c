bool containsDuplicate(int* nums, int numsSize) {
    int i;
    int hash[200003]={0};
    int used[200003]={0};
    for(i=0;i<numsSize;i++)
    {
        int index=(nums[i]%200003+200003)%200003;
        while(used[index]){    
        if(hash[index]==nums[i])
        {
            return true;
        }
        index=1+index%200003;}
        hash[index]=nums[i];
        used[index]=1;        
    }
    return false;
}