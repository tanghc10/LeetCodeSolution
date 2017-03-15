#include "stdio.h"

int main(void){
    int num = 1;
    int result = findComplement(num);
    printf("\n%d", result);
    return 0;
}

int findComplement(int num){
    int temp = num;
    int count = 0;
    while(temp){
        count++;
        temp = temp / 2;
    }
    int result = ~((~1 << (count -1)) | num);
    return result;
}
