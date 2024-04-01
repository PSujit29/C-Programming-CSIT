#ifndef CS50_H
#define CS50_H

#include <stdio.h>
#include <stdlib.h>

typedef char *string;

string get_string(const char *prompt)
{
    printf("%s", prompt);

    string input = (string)malloc(sizeof(char));
    if (input == NULL)
    {
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }

    char c;
    int index = 0;

    while ((c = getchar()) != '\n')
    {
        input = (string)realloc(input, (index + 2) * sizeof(char));
        if (input == NULL)
        {
            printf("Memory reallocation failed. Exiting.\n");
            free(input);
            exit(1);
        }

        input[index++] = c;
    }

    input[index] = '\0';

    return input;
}

int get_int(const char *prompt)
{
    int value;
    printf("%s", prompt);

    while (scanf("%d", &value) != 1)
    {
        // Clear input buffer in case of invalid input
        while (getchar() != '\n');
        
        printf("Invalid input. Please enter an integer: ");
    }

    return value;
}

#endif
