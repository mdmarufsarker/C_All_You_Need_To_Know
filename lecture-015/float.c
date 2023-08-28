#include <stdio.h>

int main(){
    float a = 3.14159F;
    printf("float a = %f\n", a);

    double b = 45436233.1415926;
    printf("double b = %lf\n", b);

    long double c = 54654165413513.141592653589793238;
    printf("long double c = %Lf\n", c);
}
/*
float a = 3.141590
double b = 45436233.141593
long double c = 54654165413513.140625
*/