bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)){
        return false;
    }
    int length = strlen(s);
    if (length == 0){
        return true;
    }
    int letter_s[26] = {0};
    int letter_t[26] = {0};
    int index = 0;
    while(index < 26){
        letter_s[index] = 0;
        letter_t[index] = 0;
        index++;
    }
    for(index = 0; index < length; index++){
        letter_s[tolower(s[index]) - 'a']++;
        letter_t[tolower(t[index]) - 'a']++;
    }
    for(index = 0; index < 26; index++){
        if(letter_s[index] != letter_t[index]){
            return false;
        }
    }
    return true;
}
