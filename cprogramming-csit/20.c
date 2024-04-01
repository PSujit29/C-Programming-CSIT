#include<stdio.h>

int main(){
    FILE *fp = fopen("hello.txt", "r");
    if (fp == NULL){
        printf("Can't open file.");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
