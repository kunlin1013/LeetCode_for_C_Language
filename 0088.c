#include <stdlib.h>
int cmp(int *a, int *b) {
    if (*a < *b)
        return -1;
    else if (*a == *b)
        return 0;
    else
        return 1;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i=0; i<n; i++)
        nums1[m + i] = nums2[i];
    
    qsort(nums1, nums1Size, sizeof(int), cmp);
}