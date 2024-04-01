#include <stdio.h>

int main() {
    float score;
    printf("\nEnter your score: ");
    scanf("%f", &score);
    char* result =   (score >= 80) ? "Distinction" 
                   : (score >= 70) ? "First division"
                   : (score >= 55) ? "Second Division"
                   : (score >= 40) ? "Third Division"
                                   : "Fail";
    printf("Score = %.2f, result = %s\n\n", score, result);
    return 0;
}
