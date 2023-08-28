#include <stdio.h>

// global variable
int abc = 100;

int main(){
    int a = 10;
    int b = 20;

    printf("%d + %d = %d\n", a, b, a + b); // 10 + 20 = 30
    printf("%d - %d = %d\n", a, b, a - b); // 10 - 20 = -10
    printf("%d * %d = %d\n", a, b, a * b); // 10 * 20 = 200
    printf("%d / %d = %d\n\n", a, b, a / b); // 10 / 20 = 0 

    printf("%d\n", abc); // 100

    // define a variable vs declare a variable
    int c; // declare a variable
    c = 30; // define a variable
    printf("%d\n", c); // 30
}