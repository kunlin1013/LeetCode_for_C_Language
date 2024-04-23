int InvertChar(char c) {
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'C')
        return 100;
    else if (c == 'D')
        return 500;
    else
        return 1000;
}
int romanToInt(char* s) {
    int result = 0;
    
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
            result += -1;
        else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
            result += -10;
        else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))
            result += -100;
        else
            result += InvertChar(s[i]);
    }
    return result;
}