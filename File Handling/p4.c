#include<stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "a");
    printf("%ld\n", ftell(fp));
}