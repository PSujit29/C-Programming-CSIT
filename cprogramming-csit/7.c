#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter an integer: ");
    scanf("%d", &num);
    if (num > 0 && num % 2 == 0) printf("%d is a positive even integer.\n\n", num);
    else if (num < 0 && num % 2 == 0) printf("%d is a negative even integer.\n\n", num);
    else if (num > 0 && num % 2 != 0) printf("%d is a positive odd integer.\n\n", num);
    else if (num < 0 && num % 2 != 0) printf("%d is a negative odd integer.\n\n", num);
    else printf("%d is neither positive nor negative (it's zero).\n\n", num);
    
    return 0;
}
