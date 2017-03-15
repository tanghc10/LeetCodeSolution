#include "stdio.h"

int main(void){
    int x;
    int y;
    int result;
    scanf("%d %d", &x, &y);
    result = hammingDistance(x, y);
    printf("\nthe result is %d", result);
    return 0;
}

int hammingDistance(int x, int y){
    int temp = x ^ y;
    int result = 0;
    while(temp != 0){
        if (temp % 2){
            result ++;
        }
        temp /= 2;
    }
    return result;
}
