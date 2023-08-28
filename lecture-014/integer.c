#include <stdio.h>

int main(){
    // signed integer data

    // short
    short a = 45;
    printf("short int a = %hi\n", a);

    // int
    int b = 1000;
    printf("int b = %d\n", b);

    // long
    long c = 100000L;
    printf("long c = %ld\n", c);

    // long long
    long long d = 1000000000LL;
    printf("long long d = %lld\n", d);

    // octal and hexadecimal
    int octal = 0200;
    int hex = 0xFF;
    printf("octal = %o\n", octal);
    printf("hex = %x\n", hex);

    printf("octal to decimal = %d\n", octal);
    printf("hex to decimal = %d\n", hex);


    // unsigned integer data

    // unsigned short
    unsigned short int x = 45U;
    printf("unsigned short int x = %hu\n", x);

    // unsigned int
    int unsigned e = 1000U;
    printf("unsigned int e = %u\n", e);

    // unsigned long
    long unsigned f = 100000UL;
    printf("unsigned long f = %lu\n", f);

    // unsigned long long
    long long unsigned g = 1000000000ULL;
    printf("unsigned long long g = %llu\n", g);

    // negative number
    unsigned short neg1 = -2;
    printf("unsigned short neg = %hu\n", neg1);
    unsigned short neg2 = -5;
    printf("unsigned short neg = %hu\n", neg2);
    unsigned short neg3 = -10;
    printf("unsigned short neg = %hu\n", neg3);
    unsigned short neg4 = -15;
    printf("unsigned short neg = %hu\n", neg4);

/*
Real Number     : 0000000000000010
1's Complement  : 1111111111111101
                        +        1
----------------------------------
2's Complement  : 1111111111111110

Decimal of 1111111111111110 = 65534
*/
}

/*
short int a = 45
int b = 1000
long c = 100000
long long d = 1000000000
octal = 200
hex = ff
octal to decimal = 128
hex to decimal = 255
unsigned short int x = 45
unsigned int e = 1000
unsigned long f = 100000
unsigned long long g = 1000000000
unsigned short neg = 65534
unsigned short neg = 65531
unsigned short neg = 65526
unsigned short neg = 65521
*/