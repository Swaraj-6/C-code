#include <stdio.h>

struct friends
{
    char name[30];
    int rollno;
    float result;
}obj1 = {"Swaraj Kakade", 18, 8.5};

void main(){
    struct friends *ptr = &obj1;

    printf("%s\n", obj1.name);
    printf("%d\n", obj1.rollno);
    printf("%f\n", obj1.result);

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).rollno);
    printf("%f\n", (*ptr).result);
}