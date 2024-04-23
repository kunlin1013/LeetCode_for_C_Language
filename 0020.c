#include <string.h>
bool isValid(char* s) {
    int strLength = strlen(s);
    if (strLength < 2)
        return false;
    char *arr = (char *) malloc(strLength+1);
    int counter = 0;

    for (int i=0; s[i]!=0; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            arr[counter] = s[i];
            counter++;
        }
        else {
            if (counter == 0) {
                free(arr);
                return false;
            }
            for (int j = counter-1; j>=0; j--) {
                if ((arr[j] == '(' && s[i] != ')') || (arr[j] == '{' && s[i] != '}') || (arr[j] == '[' && s[i] != ']')) {
                    free(arr);
                    return false;
                }
                else {
                    counter--;
                    break;
                }
            } 
        }
    }
    free(arr);
    if (counter != 0)
        return false;
    else
        return true;
}