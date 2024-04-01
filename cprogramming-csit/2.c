#include<stdio.h>

typedef struct{
    int roll;
    char name[20];
    char stream[20];
}student;

const int myArray[5];

int main()
{
    
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of struct `student`: %lu bytes\n", sizeof(student));
    printf("Size of array `myArray`: %lu bytes\n", sizeof(myArray));

    return 0;
}