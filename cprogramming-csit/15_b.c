#include <stdio.h>
#include "cs50.h" 

int string_length(string str);
void reverse_string(string str);

int main(void) {
    string str = get_string("\nEnter a string: ");
    printf("Length of the string: %d\n", string_length(str));
    printf("Reverse of the string: ");
    reverse_string(str);
    return 0;
}
int string_length(string str) { 
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) length++;
    return length;
}
void reverse_string(string str) { 
    int length = string_length(str);
    for (int i = length - 1; i >= 0; i--) printf("%c", str[i]);
    printf("\n\n");
}
