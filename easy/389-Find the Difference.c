#include"stdio.h"
char findTheDifference(char *s, char *t);
int main(void){
    char s[] = "abcd";
    char t[] = "cabed";
    findTheDifference(s, t);
    return 0;
}

char findTheDifference(char *s, char *t){
    char ch = 0;
    int counter = 0;
    while(s[counter] != '\0'){
        ch += t[counter];
        ch -= s[counter];
        counter++;
    }
    ch += t[counter];
    return ch;
}
