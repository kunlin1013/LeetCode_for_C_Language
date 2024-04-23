#include <string.h>
char* addBinary(char* a, char* b) {
    int aLength = strlen(a);
    int bLength = strlen(b);
    int maxLength = aLength >= bLength? aLength : bLength;
    char *output = (char *) malloc(maxLength+1);
    int carry = 0;

    for (int i=maxLength-1; i>=0; i--) {
        int bit1 = aLength > 0? a[aLength-1] - '0' : 0;
        int bit2 = bLength > 0? b[bLength-1] - '0' : 0;
        int sum = bit1 + bit2 + carry;
        carry = sum / 2;
        *(output+i) =  '0' + sum % 2;
        aLength--;
        bLength--;
    }
    *(output+maxLength) = '\0';
    if (carry == 1) {
        char *outputCarry = (char *) malloc(maxLength+2);
        for (int i=maxLength; i>=0; i--)
            *(outputCarry+i+1) = *(output+i);
        *outputCarry = '1';
        free(output);
        return outputCarry;
    }
    else
        return output;
}