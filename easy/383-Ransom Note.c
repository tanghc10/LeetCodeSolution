bool canConstruct(char* ransomNote, char* magazine) {
    int length_ransomNote = strlen(ransomNote);
    int length_magazine = strlen(magazine);
    int array[26] = {0};
    int counter = 0;
    while (counter < 26){
        array[counter++] = 0;
    }
    for (counter = 0; counter < length_magazine; counter++){
        array[magazine[counter] - 'a']++;
    }
    for (counter = 0; counter < length_ransomNote; counter++){
        if (array[ransomNote[counter] - 'a'] == 0){
            return false;
        }else {
            array[ra nsomNote[counter] - 'a']--;
        }
    }
    return true;
}
