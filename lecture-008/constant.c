#include <stdio.h>

int main(){
    const int PI = 3.1416;
    printf("%d\n", PI); // 100
    // PI = 200; // error: assignment of read-only variable 'PI'
}