#include <stdio.h>
#include <stdlib.h>

int computeSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int main() {
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)  scanf("%d", &array[i]);
    int sum = computeSum(array, size);
    printf("Sum of the array elements: %d\n\n", sum);
    free(array);
    return 0;  
}
