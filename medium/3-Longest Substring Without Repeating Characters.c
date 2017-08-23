int lengthOfLongestSubstring(char* s) {
    int *letter = (int *)malloc(sizeof(int) * 100);
    int length = strlen(s);
    if (length == 1 || length == 0){
        return length;
    }
    int result = 0;
    int index = 0;
    while(index < length){
        int counter = 0;
        while(counter < 100){
            letter[counter++] = 0;
        }
        counter = 0;
        while(index + counter < length){
            char ch = s[index + counter];
            if (letter[ch-' '] == 0){
                letter[ch-' '] = 1;
            }else{
                break;
            }
            counter++;
        }
        result = result > counter ? result : counter;
        index++;
    }
    return result;
}