int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *output, diff;
    *returnSize=2;
    output = (int *) malloc((*returnSize)*sizeof(int));

    for (int i=0; i<numsSize; i++) {
        diff = (target - *(nums+i));
        for (int j=i+1; j<numsSize; j++) {
            if (diff == *(nums+j)) {
                *output = i;
                *(output+1) = j;
                return output;
            }
        }
    }
    return output;
}