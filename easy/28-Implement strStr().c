int strStr(char* haystack, char* needle) {
    int result = -1, index = 0, counter = 0;
    if (haystack[0] == '\0' && needle[0] == '\0')
        return 0;
    while(haystack[index] != '\0'){
        counter = 0;
        while (haystack[index+counter] == needle[counter] && needle[counter] != '\0'){
            counter++;
        }
        if (needle[counter] == '\0'){
            result = index;
            break;
        }
        index++;
    }
    return result;
}