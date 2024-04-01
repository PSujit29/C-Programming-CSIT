#include <stdio.h>
void swap (int *, int * );
int main()
{
    int x , y;
    printf("\nEnter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("\nBefore Swapping, x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping, x = %d, y = %d\n\n", x, y);
    return 0;
}
void swap(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
