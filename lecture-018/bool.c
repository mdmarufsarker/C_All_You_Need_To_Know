#include <stdio.h>
#include <stdbool.h>

int main(){
    bool is_logged_in = 1;

    if(is_logged_in){
        printf("Welcome, user!\n");
    }else{
        printf("Please log in first!\n");
    }
}