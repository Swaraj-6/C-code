#include<stdio.h>

void main(){
    FILE *fp = fopen("Sample2.txt", "w+");

    int num1 = 10;
    int num2 = 20;

    putw(num1, fp);
    putw(num2, fp);
    // fprintf(fp, "%d", 10);  
    rewind(fp);
    printf("%d\n", getw(fp));
    printf("%d\n", getw(fp));
}