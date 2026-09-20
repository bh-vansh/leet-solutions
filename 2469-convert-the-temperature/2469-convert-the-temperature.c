/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double k,f,i;
        k=celsius+273.15;
        f=celsius*1.80+32.00;
    double *temp=malloc(2*sizeof(double));
        temp[0]=k;
        temp[1]=f;
    *returnSize=2;
    return temp;
}