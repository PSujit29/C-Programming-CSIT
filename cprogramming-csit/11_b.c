#include <stdio.h>
#include "cs50.h"

int main() {
    int a = get_int("\nEnter the value of a: ");
    int b = get_int("Enter the value of b: ");
    long long result = 1;

    printf("\nUsing for loop:");
    for (int i = 0; i < b; i++) result *= a;
    printf("\t\t%d^%d = %lld\n", a, b, result);
    result = 1;
    printf("Using do-while loop:");

    int count = 0; 
    do {
        result *= a;
        count++;
    } while (count < b);
    printf("\t%d^%d = %lld\n", a, b, result);

    result = 1;
    printf("Using while loop:");
    int exponent = 0;
    while (exponent < b) {
        result *= a;
        exponent++;
    }
    printf("\t%d^%d = %lld\n\n", a, b, result);
    return 0;
}
