# include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct friends
{
    char name[30];
    int rollno;
    float result;
};

void main(){
    struct friends *ptr = (struct friends*)malloc(sizeof(struct friends));

    strcpy((*ptr).name, "Swaraj Kakade");
    (*ptr).result = 8.9;
    (*ptr).rollno = 18;

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).rollno);
    printf("%f\n", (*ptr).result);

    free(ptr);

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).rollno);
    printf("%f\n", (*ptr).result);
}