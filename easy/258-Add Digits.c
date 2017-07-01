#include"stdio.h"
int addDigits(int num);
void main(void){
    int num, result;
    scanf("%d", &num);
    result = addDigits(num);
    printf("%d\n", result);
}

int addDigits(int num){
    int result = num % 9;
    if (result != 0 || num == 0){
        return result;
    }else{
        return 9;
    }
}
