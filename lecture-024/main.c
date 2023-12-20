#include <stdio.h>
#include <stdbool.h>

int main(){
    bool has_nid = false;
    bool has_passport = true;
    bool is_adult = true;

    bool has_identity = has_nid || has_passport;
    bool is_eligible = has_identity && is_adult;

    if(is_eligible){
        printf("You are eligible to vote\n");
    }else{
        printf("You are not eligible to vote\n");
    }

    bool is_permitted = (has_nid || has_passport) && is_adult;

    if(is_permitted){
        printf("You are permitted to enter\n");
    }else{
        printf("You are not permitted to enter\n");
    }
}