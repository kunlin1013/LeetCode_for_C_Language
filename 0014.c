#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char *output = (char *) malloc(1);
        *output = '\0';
        return output;
    }

    int minlen = strlen(strs[0]);
    for (int i=1; i<strsSize; i++) {
        if (minlen > strlen(strs[i]))
            minlen = strlen(strs[i]);
    }
    char *output = (char *) malloc(minlen+1);

    char currentChar;
    int flag;
    int i;
    for (i=0; i<minlen; i++) {
        flag = 1;
        currentChar = strs[0][i];
        for (int j=1; j<strsSize; j++) {
            if (strs[j][i] != currentChar) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            *(output+i) = currentChar;
        else
            break;
    }
    *(output+i) = '\0';
    return output;
}