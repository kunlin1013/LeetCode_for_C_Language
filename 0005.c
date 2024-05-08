#include <string.h>
int isPailndrome(char *s, int start, int end) {
    while (start < end) {
        if (s[start++] != s[end--])
            return 0;
    }
    return 1;
}

char* longestPalindrome(char* s) {
    int n = strlen(s);
    int maxlen = 0;
    int start = 0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (isPailndrome(s, i, j)) {
                if (j-i+1 > maxlen) {
                    maxlen = j-i+1;
                    start = i;
                }
            }
        }
    }

    char *output = (char *) malloc(maxlen + 1);
    strncpy(output, s+start, maxlen);
    *(output+maxlen) = '\0';
    
    return output;
}