// floyd's triangle
#include <stdio.h>

int main(){
    int n, num = 0;
    printf("\nWhat's n? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){ printf("%d ", ++num); }
        printf("\n");
    }
    printf("\n");
    return 0;
}