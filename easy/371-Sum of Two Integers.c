#include"stdio.h"

int getSum(int a, int b);

int main(void){
    int num = getSum(30,20);
    printf("%d\n", num);
    return 0;
}

int getSum(int a, int b){
    if (b == 0){
        return a;
    }
    int sum, carry;
    sum = a^b;
    carry = (a&b) << 1;
    return getSum(sum, carry);
}
