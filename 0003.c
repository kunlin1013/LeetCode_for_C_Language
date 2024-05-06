#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int stringlen = strlen(s);
    int maxLength = 0, start = 0;
    int charindex[256];
    memset(charindex, -1, sizeof(charindex));

    for (int end=0; end<stringlen; end++) {
        if (charindex[s[end]] >= start)
            start = charindex[s[end]] + 1;
        
        charindex[s[end]] = end;
        maxLength = (end - start + 1 > maxLength) ? end - start + 1 : maxLength;
    }

    return maxLength;
}