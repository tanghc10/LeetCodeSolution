int ch2int(char ch){
    switch(ch){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int length = strlen(s);
    if (length == 0){
        return 0;
    }
    int index = 0;
    char ch = s[index];
    int result = ch2int(ch);
    if (length == 1){
        return result;
    }
    for(index = 1; index < length; index++){
        ch = s[index];
        result += ch2int(ch);
        if (ch2int(s[index]) > ch2int(s[index-1])){
            result -= ch2int(s[index-1])*2;
        }

    }
    return result;
}

