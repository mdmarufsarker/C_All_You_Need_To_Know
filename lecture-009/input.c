#include <stdio.h>

int main(){
    int a, b;
    float c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a, b); // 10 5

    scanf("%f %f", &c, &d);
    printf("%f %f\n", c, d); // 7.800000 9.500000
}

/*
10
5
10 5
7.8 9.5
7.800000 9.500000
*/