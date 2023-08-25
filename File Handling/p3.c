#include<stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    fprintf(fp, "Hello world. \n");
    fprintf(stdout, "Hello world. \n");

    FILE *fp2 = fopen("sample2.txt", "r");
    char ch;
    fscanf(fp2, "%c", &ch);
    printf("%c\n", ch);
}