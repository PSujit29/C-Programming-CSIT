#include <stdio.h>

int main(){
    int n;
    printf("What's n? ");
    scanf("%d", &n);
    printf("\n1st pattern: \n\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) printf(" * ");
        printf("\n");
    }
    printf("\n Pattern 2:\n\n");
    for (int row = 0; row < n; row++){
        for (int space = 0; space < n - row - 1; space++) printf(" ");
        for (int i = 0; i <= row; i++) printf(" * ");
        printf("\n");
    }
    return 0;
}