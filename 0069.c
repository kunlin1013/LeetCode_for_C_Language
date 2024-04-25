// int mySqrt(int x) {
//     if (x == 0)
//         return 0;
//     if (x == 1)
//         return 1;
    
//     unsigned int result = 1;
//     while (1) {
//         if (result*result <= x && (result+1)*(result+1) > x)
//             return result;
//         else
//             result++;
//     }
// }

// Binary search
int mySqrt(int x) {
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    
    int upper = x;
    int lower = 0;
    while (upper >= lower) {
        int middle = lower + (upper - lower) / 2;
        if (middle > x / middle)
            upper = middle - 1;
        else
            lower = middle + 1;
    }
    return upper;
}