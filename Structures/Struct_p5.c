#include<stdio.h>

struct friends
{
    char name[30];
    int rollno;
    float result;
};


void main(){
    struct friends tushar = {"Tushar Patle", 9, 9.0};
    struct friends yash = {"Yash Nathe", 32, 8.0};
    struct friends rohan = {"Rohan Dable", 65, 8.5};

    struct friends arr[] = {tushar, yash, rohan};

    for(int i=0; i<3; i++){
        printf("%s\n", arr[i].name);
        printf("%d\n", arr[i].rollno);
        printf("%f\n", arr[i].result);
    }
}