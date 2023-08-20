# include<stdio.h>
#include<string.h>

// struct movieinfo{
//     char actor[20];
//     float imdb;
// };

struct movie{
    char mName[20];
    struct movieinfo{
    char actor[20];
    float imdb;
    }obj1;
};

void main(){
    struct movie obj2 = {"Tumbad", {"Swaraj", 8.8}};


    // strcpy(obj2.mName, "Kantara");
    // strcpy(obj2.obj1.actor, "Rishabh");
    // obj2.obj1.imdb = 9.7;

    printf("%s\n", obj2.mName);
    printf("%s\n", obj2.obj1.actor);
    printf("%f\n", obj2.obj1.imdb);
} 