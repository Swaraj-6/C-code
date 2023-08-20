#include <stdio.h>
// #pragma pack(1)

struct Demo
{
    char pName[20];
    int jer;
    float avg;
};

struct Demo obj2 = {"MSD", 7, 50};


void main(){
    struct Demo obj = {"Virat Kohli", 18, 50.33};

    
    printf("%s\n", obj.pName);
    printf("%d\n", obj.jer);
    printf("%f\n", obj.avg);
    printf("%ld\n", sizeof(obj));
    printf("%ld\n", sizeof(struct Demo));


    printf("%s\n", obj2.pName);
    printf("%d\n", obj2.jer);
    printf("%f\n", obj2.avg);

    printf("%p\n", obj);

}