/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* fairCandySwap(int* aliceSizes, int aliceSizesSize, int* bobSizes, int bobSizesSize, int* returnSize) {
    int sumAlice = 0;
    int sumBob = 0;

  
    static bool bobHas[100001];
    memset(bobHas, 0, sizeof(bobHas));

    for (int i = 0; i < aliceSizesSize; i++) {
        sumAlice += aliceSizes[i];
    }

    for (int i = 0; i < bobSizesSize; i++) {
        sumBob += bobSizes[i];
        bobHas[bobSizes[i]] = true;
    }

    
    int delta = (sumBob - sumAlice) / 2;

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < aliceSizesSize; i++) {
        int x = aliceSizes[i];
        int targetY = x + delta;

        
        if (targetY >= 1 && targetY <= 100000 && bobHas[targetY]) {
            result[0] = x;
            result[1] = targetY;
            return result;
        }
    }

    return result;
}
