#include<stdio.h>
int main() {
    FILE *fp = fopen("hello.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    char ch;
    int lines = 1, characters = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') lines++;
        if (!(ch == ' ' || ch == '\n' || ch == '\t')) characters++;
    }
    printf("Character count = %d\n", characters);
    printf("Lines count = %d\n", lines);
    fclose(fp);
    return 0;
}
