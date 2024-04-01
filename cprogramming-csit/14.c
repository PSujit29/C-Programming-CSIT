#include <stdio.h>

int main(){
    int A[3][3], B[3][3], sum[3][3], product[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the element for matrix A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }  }
    printf("\n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the element for matrix B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
            sum[i][j] = A[i][j] + B[i][j]; // Smm matrix
        } }

    printf("\nSum matrix is shown below: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d\t", sum[i][j]);
        printf("\n"); 
    }
    printf("\n");

    // Product matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
                product[i][j] += A[i][k] * B[k][j];
        } }
    printf("\nProduct matrix is shown below:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d\t", product[i][j]);
        printf("\n");
    }

    return 0;
}