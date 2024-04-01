#include <stdio.h>

int main(void) 
{
    int days, years, weeks, rDays;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    rDays = (days % 365) % 7;
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", days, years, weeks, rDays);
    return 0;
}
