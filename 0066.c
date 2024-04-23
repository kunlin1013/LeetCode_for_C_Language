/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i=digitsSize-1; i>=0; i--) {
        digits[i]++;
        if (digits[i] < 10) {
            *returnSize = digitsSize;
            return digits;
        }
        else
            digits[i] = 0;
    }
    int *output;
    *returnSize = digitsSize + 1;
    output = (int *) malloc((*returnSize)*sizeof(int));

    *output = 1;
    for (int i=1; i<*returnSize; i++) {
        *(output+i) = 0;
    }
    return output;
}