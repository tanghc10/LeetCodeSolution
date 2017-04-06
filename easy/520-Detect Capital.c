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
    if ((ch >= 'A') && (ch <= 'Z')){
        max = 'Z';
        min = 'A';
    }
    while(ch != '\0'){
        if ((ch >= 'a') && (ch <= 'z') && max == 0){
            max = 'z';
            min = 'a';
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
