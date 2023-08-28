#include <stdio.h>

int main(){
    // Way 1
    char name1[20];

    name1[0] = 'M';
    name1[1] = 'a';
    name1[2] = 'r';
    name1[3] = 'u';
    name1[4] = 'f';
    name1[5] = ' ';
    name1[6] = 'S';
    name1[7] = 'a';
    name1[8] = 'r';
    name1[9] = 'k';
    name1[10] = 'e';
    name1[11] = 'r';
    name1[12] = '\0';

    printf("My name is %s\n", name1); 
    // My name is Maruf Sarkar


    // Way 2
    char name2[20] = {'M', 'a', 'r', 'u', 'f', ' ', 'S', 'a', 'r', 'k', 'e', 'r', '\0'};
    printf("My name is %s\n", name2); 
    // My name is Maruf Sarker


    // Way 3
    char name3[20] = "Maruf Sarkar";
    printf("My name is %s\n", name3); 
    // My name is Maruf Sarkar


    // take input
    char name4[20];
    printf("Enter your name: ");
    scanf("%s", name4);
    printf("My name is %s\n", name4);
}