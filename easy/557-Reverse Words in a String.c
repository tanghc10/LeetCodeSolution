#include "stdio.h"
#include "string.h"
char *reverseWords(char *s);
void reverse(int b, int e, char *s);
void main(void){
    char *s = "Let's take LeetCode contest";
    reverseWords(s);
    //printf("%s", s);
    return;
}

char *reverseWords(char *s){
	int length = strlen(s);
	int i, index = 0;
	for (i = 0; i <= length; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			reverse(index, i - 1, s);
			//printf("2");
			index = i + 1;
		}
	}
	return s;
}

void reverse(int b, int e, char *s) {
    //printf("1");
	while (b < e) {
        //printf("%c %c", s[b], s[e]);
		s[b] = s[b] ^ s[e];
        s[e] = s[b] ^ s[e];
        s[b] = s[b] ^ s[e];
		//printf("%c %c", s[b], s[e]);
		b++;
		e--;
	}
}
