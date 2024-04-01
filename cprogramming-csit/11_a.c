#include <stdio.h>
int main() {
    int N;
    long long factorial = 1;
    printf("\nEnter an integer N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) factorial *= i;
    printf("Factorial using for loop: %lld\n", factorial);
    factorial = 1; //reset
    int j = 1;
    while (j <= N) {
        factorial *= j;
        ++j;
    }
    printf("Factorial using while loop: %lld\n", factorial);
    factorial = 1;//reset
    int k = 1;
    do {
        factorial *= k;
        ++k;
    } while (k <= N);
    printf("Factorial using do-while loop: %lld\n\n", factorial);
    return 0;
}
