#include<stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "r");
    printf("%p\n", fp);
    printf("%d\n", (*fp)._fileno);


    FILE *fp2 = fopen("sample.txt", "w");
    printf("%p\n", fp2);
    printf("%d\n", (*fp2)._fileno);
}

