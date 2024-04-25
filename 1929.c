/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int *output = (int *) malloc(*returnSize * sizeof(int));
    for (int i=0; i<numsSize; i++) {
        *(output+i) = nums[i];
        *(output+i+numsSize) = nums[i];
    }
    return output;
}