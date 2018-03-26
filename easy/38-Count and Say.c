char* countAndSay(int n) {
    if (n == 1){
        return "1";
    }
    char *current = (char *)malloc(sizeof(char) * 2);
    current[0] = '1';
    current[1] = 0;
    char *temp = NULL;
    int i = 1;
    while(i++ < n){
        int length = strlen(current);
        temp = (char *)malloc(3*length*sizeof(char));
        memset(temp, 0, 3*length);
        int count = 1,index = 1, j = 0;
        for(; index < length; index++){
            if (current[index] == current[index-1]) count++;
            else{
                temp[j++] = '0' + count;
                temp[j++] = current[index-1];
                count = 1;
            }
        }
        temp[j++] = '0' + count;
        temp[j] = current[length-1];
        free(current);
        current = temp;
    }
    return current;
}