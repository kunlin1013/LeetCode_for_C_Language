#include <limits.h>
int myAtoi(char* s) {
    int sign = 1, result = 0, i = 0;

    // skip whitespace
    while (s[i] == ' ') i++;

    // check sign
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
            return (sign == 1) ? INT_MAX : INT_MIN;
        
        result = 10 * result + digit;
        i++;
    }
    return sign * result;
}