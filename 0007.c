#include <math.h>
int reverse(int x){
    if (x == 0) return x;
    if (x == -pow(2.0, 31) || x == pow(2.0, 31) - 1) return 0;
    char *reverse_char = (char *) malloc(10);
    int flag = (x > 0) ? 0 : 1;
    x = (flag == 1) ? -x : x;
    int result = 0;
    int n = 0;

    while (x > 0) {
        reverse_char[n++] = (x % 10) + '0';
        x = x / 10;
    }

    for (int i=n-1; i>0; i--) {
        int char_int = reverse_char[n-i-1] - '0';
        result += (int)(reverse_char[n-i-1] - '0');
        if (result > pow(2.0, 31) / 10) return 0;
        result *= 10;
    }
    result += (int)(reverse_char[n-1] - '0');

    free(reverse_char);
    return (flag == 1) ? -result : result;
}