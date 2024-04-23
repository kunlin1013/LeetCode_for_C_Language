int lengthOfLastWord(char* s) {
    int lastLength = 0;
    int subLength = 0;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i] == ' ')
            subLength = 0;
        else 
            subLength++;
        if (subLength != 0)
            lastLength = subLength;
    }
    return lastLength;
}