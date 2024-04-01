#include <stdio.h>

int main() {
    int num1, num2;
    printf("\nEnter the first integer and second integer\n");
    scanf("%d%d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %f\n", (float)num1 / num2); 
        printf("Remainder: %d\n\n", num1 % num2);
    } 
    else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
