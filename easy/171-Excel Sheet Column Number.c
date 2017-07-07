int titleToNumber(char* s) {
    int result = 0;
    int index = 0;
    int length = strlen(s);
    while(index < length){
        result = result * 26;
        result += tolower(s[index++]) - 'a' + 1;
    }
    return result;
}
