#include <stdio.h>
#include <conio.h>
void operate(int, int, char);
int main(){
    char operator;
    int a, b;
    printf("\nEnter two numbers?\n");
    scanf("%d%d", &a, &b);
    printf("Operator (+, -, *, /, %):\t");
    operator= getche();
    printf("\n");
    operate(a, b, operator);
    return 0;
}
void operate(int x, int y, char op){
    if (op == '+') printf("sum = %d", x + y);
    else if (op == '-') printf("difference = %d", x - y);
    else if (op == '*') printf("product = %d", x * y);
    else if (op == '/'){
        if (y != 0) printf("division = %d", x / y);
        else printf("Cannot divide by zero.");
    }
    else if (op == '%') {
        if (y != 0) printf("modulo operation = %d", x % y);
        else printf("Cannot perform modulo by zero.");
    }
    else printf("Ab toh tu gaya beta! Tu dekh mera aaukath ");
    printf("\n\n");
}