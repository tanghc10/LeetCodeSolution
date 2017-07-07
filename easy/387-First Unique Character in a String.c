int firstUniqChar(char* s) {
    int letter[26] = {0};
    int index = 0;
    int length = strlen(s);
    while(index < 26){
        letter[index++] = 0;
    }
    for (index=0; index<length; index++){
        letter[tolower(s[index]) - 'a']++;
    }
    for (index=0; index<length; index++){
        if (letter[tolower(s[index]) - 'a'] == 1){
            return index;
        }
    }
    return -1;
}
