#include <stdio.h>

int main(){
    char ch = 'T';
    int r = (int)ch + 100;
    printf("%c %d %x\n", ch, r, r); // T 184 b8
    printf("Result: %d\n", r); // Result: 184

    printf("Float: %f\n", (float)r); // Float: 184.000000

    float a = 4.5f;
    float b = 5.3f;
    float c = 6.2f;

    int result;
    result = a + b + c;
    printf("Result: (Without Conversion) %d\n", result); // 16
    result = (int)a + (int)b + (int)c;
    printf("Result: (Using Conversion) %d\n", result); // 15
}