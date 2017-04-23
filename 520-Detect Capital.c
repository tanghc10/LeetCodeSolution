#include"stdio.h"
#define bool int
#define true 1
#define false 0

bool detectCapitalUse(char *word);
int main(){
    char word[100];
    while(1){
        scanf("%s", word);
        getchar();
        detectCapitalUse(word);
    }
    return 0;
}

bool detectCapitalUse(char *word){
    int counter = 0;
    char ch = word[counter];
    int max = 0;
    int min = 0;
    int flag = 1;
    if ((ch >= 'a') && (ch <= 'z')){
        max = 'z';
        min = 'a';
        flag = 0;
    }
    ch = word[++counter];
    while(ch != '\0'){
        if (flag == 1){
            if ((ch >= 'a') && (ch <= 'z')){
                max = 'z';
                min = 'a';
            }else{
                max = 'Z';
                min = 'A';
            }
        }else{
            if ((ch <= min) || (ch >= max)){
                return false;
            }
        }
        ch = word[++counter];
        while(ch != '\0'){
            if ((ch >= min) && (ch <= max)){
                ch = word[++counter];
            }else{
                return false;
            }
        }
    }
    return true;
}
