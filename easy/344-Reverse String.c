#include "stdio.h"
#include "string.h"
char *reverseString(char *s);

int main(void){
    char *s = "hello";
    char *result = NULL;
    result = reverseString(s);
    printf("%s", result);
    return 0;
}

char *reverseString(char *s){
    int length = strlen(s);
    char *temp = (char *)malloc(sizeof(char) * (length + 1));
    int counter = length - 1;
    char *result = temp;
    while(counter >= 0){
        *temp = *(s + counter);
        temp++;
        counter--;
    }
    *temp = '\0';
    return result;
}
