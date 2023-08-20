#include<stdio.h>
#include<string.h>

struct friends
{
    char name[30];
    int rollno;
    float result;
};

struct friends rohan;

void fun(){
    struct friends tushar = {"Tushar Patle", 9, 9.0};
    printf("%s\n", tushar.name);
    printf("%d\n", tushar.rollno);
    printf("%f\n", tushar.result);
};

void main(){
    struct friends yash = {"Yash Nathe", 32, 8.0};
    printf("%s\n", yash.name);
    printf("%d\n", yash.rollno);
    printf("%f\n", yash.result);

    char str[20];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    strcpy(rohan.name, str);
    rohan.rollno = 18;
    rohan.result = 8.5;

    printf("%s\n", rohan.name);
    printf("%d\n", rohan.rollno);
    printf("%f\n", rohan.result);

    fun();
}