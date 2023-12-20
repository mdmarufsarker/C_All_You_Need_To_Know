#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10, b = 20;
    bool result = a > b;
    printf("a > b is %d\n", result); // 0
    result = a < b;
    printf("a < b is %d\n", result); // 1
    result = a == b;
    printf("a == b is %d\n", result); // 0
    result = a != b;
    printf("a != b is %d\n", result); // 1
    result = a >= b;
    printf("a >= b is %d\n", result); // 0
    result = a <= b;
    printf("a <= b is %d\n", result); // 1
}