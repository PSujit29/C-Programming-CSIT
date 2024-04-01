#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 100; ++i) sum += i;
    printf("\nThe sum of the first %d natural numbers is: %d\n\n", 100, sum);
    return 0;
}
