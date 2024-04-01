// Write a program to get a string as input and print the length of string, reverse of the string Using String Library Function
#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string s = get_string("Enter a string: ");
    int len = strlen(s);
    printf("Length of the string: %d\n", len);
    printf("Reverse of the string: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n\n");
}