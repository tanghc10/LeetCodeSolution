bool isValid(char* s) {
    int top = -1, index = 0;
    int length = strlen(s);
    char *stack = (char *)malloc(sizeof(char) * (length+1));
    while(index < length){
        char ch = s[index];
        if (ch == '(' || ch == '[' || ch == '{'){
            stack[++top] = ch;
        }else if (ch == ')'){
            if (top == -1 || stack[top] != '('){
                return false;
            }else{
                top--;
            }
        }else if (ch == ']'){
            if (top == -1 || stack[top] != '['){
                return false;
            }else{
                top--;
            }
        }else if (ch == '}'){
            if (top == -1 || stack[top] != '{'){
                return false;
            }else{
                top--;
            }
        }
        index++;
    }
    if (top == -1){
        return true;
    }else{
        return false;
    }
}