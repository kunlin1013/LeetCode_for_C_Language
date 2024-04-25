int finalValueAfterOperations(char** operations, int operationsSize) {
    int output = 0;
    for (int i=0; i<operationsSize; i++) {
            if (operations[i][0] == '+' || operations[i][2] == '+')
                output++;
            else 
                output--;
    }
    return output;
}
