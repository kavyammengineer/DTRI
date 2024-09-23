int calPoints(char** operations, int operationsSize) {
   int* scores = (int*)malloc(operationsSize * sizeof(int));
    int size = 0;
    for (int i = 0; i < operationsSize; i++) {
        if (operations[i][0] == 'C') {
            size--;
        } else if (operations[i][0] == 'D') {
            scores[size++] = scores[size - 1] * 2;
        } else if (operations[i][0] == '+') {
            scores[size++] = scores[size - 1] + scores[size - 2];
        } else {
            scores[size++] = atoi(operations[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    free(scores);return sum;
}
