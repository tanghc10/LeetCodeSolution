#include"stdio.h"
#define bool int
#define true 1
#define false 0

int main(void){
    int n;
    scanf("%d", &n);
    getchar();
    int result = canWinNim(n);
    if (result == true){
        printf("can!");
    }else{
        printf("can't!");
    }
    return 0;
}

bool canWinNim(int n){
    if (n % 4 == 0){
        return false;
    }else{
        return true;
    }
}
