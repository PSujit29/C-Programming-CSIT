#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("table of %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
