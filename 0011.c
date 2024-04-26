int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;
    
    while (left < right) {
        int maxheight = (height[left] < height[right]) ? height[left] : height[right];
        max = (max < maxheight * (right - left)) ? maxheight * (right - left) : max;
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return max;
}