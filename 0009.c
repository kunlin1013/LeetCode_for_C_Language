bool isPalindrome(int x) {
    if (x < 0)
        return false;
    
    char *arr = (char*) malloc(10);
    int counter = 0;
    while (x != 0) {
        *(arr+counter) = '0' + (x % 10);
        x /= 10;
        counter++;
    }
    for (int i=0; i<(counter/2); i++) {
        if (*(arr+i) != *(arr+counter-i-1)) {
            free(arr);
            return false;
        }
            
    }
    free(arr);
    return true;
}