#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;
    printf("\nEnter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n\n", root2);
    }
    else if (discriminant == 0){
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n\n", root1);
    }
    else{
        float rPart = -b / (2 * a);
        float iPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugates:\n");
        printf("Root 1 = %.2f + %.2fi\n", rPart, iPart);
        printf("Root 2 = %.2f - %.2fi\n\n", rPart, iPart);
    }
    return 0;
}
