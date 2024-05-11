#include <string.h>
int strStr(char* haystack, char* needle) {
    int index = -1;
    int haystackLength = strlen(haystack);
    int needleLength = strlen(needle);
    for (int i=0; i<haystackLength; i++) {
        int j;
        for (j=0; j<needleLength; j++) {
            if (haystack[i] == needle[j]) {
                if (j==0) index = i;
                if (j==needleLength-1) return index;
                i++;
            } else
                break;
        }
        i = i - j;
    }
    return -1;
}