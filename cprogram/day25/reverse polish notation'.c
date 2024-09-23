int evalRPN(char** tokens, int tokensSize) {
      int *stack=malloc(tokensSize*sizeof(int));
    int top=0;
    for(int i=0;i<tokensSize;i++)
    {
        if (strcmp(tokens[i], "+") == 0) {
            int a = stack[--top];
            int b = stack[--top];
            stack[top++] = b + a;
        } else if (strcmp(tokens[i], "-") == 0) {
            int a = stack[--top];
            int b = stack[--top];
            stack[top++] = b - a;
        } else if (strcmp(tokens[i], "*") == 0) {
            int a = stack[--top];
            int b = stack[--top];
            stack[top++] = b * a;
        } else if (strcmp(tokens[i], "/") == 0) {
            int a = stack[--top];
            int b = stack[--top];
            stack[top++] = b / a;

        }
        else
        stack[top++]=atoi(tokens[i]);
    }
    int res=stack[0];
    return res;

}
