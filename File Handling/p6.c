#include<stdio.h>

// void main(){
//     char ch;
//     int count = 0;
//     FILE *fp = fopen("sample2.txt", "r");
//     FILE *fp2 = fopen("sample.txt", "w");

//     while((ch = fgetc(fp)) != EOF){
//         fputc(ch, fp2);
//         count++;
//     }
//     printf("\n");
//     printf("%d\n", count);
// }

void main(){
    FILE *fp1 = fopen("sample2.txt", "r");
    FILE *fp2 = fopen("sample.txt", "w");

    char name[30];

    fgets(name, 30, fp1);
    fputs(name, fp2);
}