#include "stdio.h"
#include "string.h"
char *Fizz = "Fizz";
char *Buzz = "Buzz";
char *FizzBuzz = "FizzBuzz";
char **fizzbuzz(int n, int *returnSize);
void IntToString(int n, char **resultStr);

int main(void){
    int n = 15, returnSize = 0;
    char **resultStr = fizzbuzz(n, &returnSize);
}

char **fizzbuzz(int n, int *returnSize){
    *returnSize = n;
    char **results = malloc(sizeof(char *) * n);
    int counter = 0;
    int counter_fizz = 3;
    int counter_buzz = 5;
    for(; counter < n; counter++){
        counter_fizz--;
        counter_buzz--;
        if (counter_fizz == 0 && counter_buzz == 0){
            results[counter] = malloc(sizeof(char)*9);
            strcpy(results[counter], FizzBuzz);
            counter_fizz = 3;
            counter_buzz = 5;
            printf("%s\n", results[counter]);
        }else if (counter_fizz == 0){
            results[counter] = malloc(sizeof(char)*5);
            strcpy(results[counter], Fizz);
            counter_fizz = 3;
            printf("%s\n", results[counter]);
        }else if (counter_buzz == 0){
            results[counter] = malloc(sizeof(char)*5);
            strcpy(results[counter], Buzz);
            counter_buzz = 5;
            printf("%s\n", results[counter]);
        }else{
            IntToString(counter+1, results + counter);
            printf("%s\n", results[counter]);
        }
    }
    return results;
}

void IntToString(int n, char **resultStr){
    char result[100];
    result[99] = '\0';
    int counter = 98;
    for(; n > 0; counter--){
        result[counter] = n % 10 + '0';
        n /= 10;
    }
    *resultStr = malloc(sizeof(char)*(99-counter));
    strcpy(*resultStr, result+counter+1);
    return;
}
