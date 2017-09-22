char* longestCommonPrefix(char** strs, int strsSize) {
     if (strsSize == 0) return "";
     char *base_array = strs[0];
     int index = 1;
     while(index < strsSize){
        char *temp = strs[index];
        int counter = 0;
        while(base_array[counter] != '\0' && temp[counter] != '\0'){
            if (base_array[counter] == temp[counter]){
                counter++;
            }else{
                break;
            }
        }
        base_array[counter] = '\0';
        index++;
     }
     return strs[0];
}