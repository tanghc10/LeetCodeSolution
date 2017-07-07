int longestPalindrome(char* s) {
    int length = strlen(s);
    if (length == 0){
        return 0;
    }
    int lowercase[26] = {0};
    int uppercase[26] = {0};
    int index = 0;
    int result = 0;
    int hasAddOne = 1;
    for (; index < 26; index++){
        lowercase[index] = 0;
        uppercase[index] = 0;
    }
    for (index = 0; index < length; index++){
        if ((s[index] >= 'a' && s[index] <= 'z')){
            lowercase[s[index] - 'a']++;
        }else{
            uppercase[s[index] - 'A']++;
        }
    }
    for (index = 0; index < 26; index++){
        if ((lowercase[index] % 2 || uppercase[index] % 2) && hasAddOne){
            result += 1;
            hasAddOne = 0;
        }
        result += (lowercase[index] / 2) * 2;
        result += (uppercase[index] / 2) * 2;
    }
    return result;
}
