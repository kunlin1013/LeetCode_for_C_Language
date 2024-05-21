/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *output = (int *) malloc(*matrixColSize * matrixSize * sizeof(int));
    int top = 0;
    int bottom = matrixSize - 1;
    int left = 0;
    int right = *matrixColSize - 1;
    int index = 0;
    int direction = 0;

    while (top <= bottom && left <= right) {
        if (direction == 0) {           //Right
            for (int i=left; i<=right; i++)
                output[index++] = matrix[top][i];
            top++;
        } else if (direction == 1) {    // down
            for (int i=top; i<=bottom; i++)
                output[index++] = matrix[i][right];
            right--;
        } else if (direction == 2) {    // left
            for (int i=right; i>=left; i--)
                output[index++] = matrix[bottom][i];
            bottom--;
        } else if (direction == 3) {    // up
            for (int i=bottom; i>=top; i--)
                output[index++] = matrix[i][left];
            left++;
        } 
        direction = (direction + 1) % 4;
    }
    *returnSize = index;
    return output;
}