#include<stdio.h>

int main()
{
    FILE *fp = fopen("hello.txt", "r");
    FILE *file = fopen("newfile.txt", "w");
    if (fp == NULL){
        printf("Can't open file.");
        return 1;
    }
    if (file == NULL){
        printf("Error creating file");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, file);
    }
    fclose(fp);
    fclose(file);
    return 0;
}
