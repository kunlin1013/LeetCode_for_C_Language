bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i=0; i<numsSize; i++) {
        if (i > maxReach) return 0;
        maxReach = (i + nums[i] > maxReach) ? i + nums[i] : maxReach;
        if (maxReach >= numsSize - 1) return 1;
    }
    return 0;
}