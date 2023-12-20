#include <stdio.h>

int main(){
    int a = 10;
    a = a + 15;
    printf("a = %d\n", a); // a = 25

    a += 15;
    printf("a = %d\n", a); // a = 40
    a -= 5; // a = a - 5
    printf("a = %d\n", a); // a = 35
    a *= 2; // a = a * 2
    printf("a = %d\n", a); // a = 70
    a /= 7; // a = a / 7
    printf("a = %d\n", a); // a = 10
    a %= 3; // a = a % 3
    printf("a = %d\n", a); // a = 1
}