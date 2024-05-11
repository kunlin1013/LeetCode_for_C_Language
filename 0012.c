char* intToRoman(int num) {
    char *result = (char *) malloc(20);
    int n = 0;

    while (num != 0) {
        if (num >= 1000){
            result[n++] = 'M';
            num -= 1000;
        } else if (num >= 900) {
            result[n++] = 'C';
            result[n++] = 'M';
            num -= 900;
        } else if (num >= 500) {
            result[n++] = 'D';
            num -= 500;
        } else if (num >= 400) {
            result[n++] = 'C';
            result[n++] = 'D';
            num -= 400;
        } else if (num >= 100) {
            result[n++] = 'C';
            num -= 100;
        } else if (num >= 90) {
            result[n++] = 'X';
            result[n++] = 'C';
            num -= 90;
        } else if (num >= 50) {
            result[n++] = 'L';
            num -= 50;
        } else if (num >= 40) {
            result[n++] = 'X';
            result[n++] = 'L';
            num -= 40;
        } else if (num >= 10) {
            result[n++] = 'X';
            num -= 10;
        } else if (num >= 9) {
            result[n++] = 'I';
            result[n++] = 'X';
            num -= 9;
        } else if (num >= 5) {
            result[n++] = 'V';
            num -= 5;
        } else if (num >= 4) {
            result[n++] = 'I';
            result[n++] = 'V';
            num -= 4;
        } else {
            result[n++] = 'I';
            num -= 1;
        }
    }

    result[n] = '\0';
    return result;
}