#include <stdio.h>

int main(){
    float num1, num2, result;

    printf("Please Enter Two Numbers(4, 2.3): ");
    scanf("%f %f", &num1, &num2);

    result = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);

    result = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, result);

    result = num1 * num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, result);

    result = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
}

/*
Please Enter Two Numbers(4, 2.3): 7 3
7.00 + 3.00 = 10.00
7.00 - 3.00 = 4.00
7.00 * 3.00 = 21.00
7.00 / 3.00 = 2.33

Please Enter Two Numbers(4, 2.3): 10 2.5
10.00 + 2.50 = 12.50
10.00 - 2.50 = 7.50
10.00 * 2.50 = 25.00
10.00 / 2.50 = 4.00
*/