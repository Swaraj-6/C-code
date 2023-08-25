#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "r");
    fseek(fp, -7, 2);
    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
}