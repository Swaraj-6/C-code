#include<stdio.h>

struct Demo{
    int x;
    float y;
};

void fun(struct Demo obj1){
    printf("%d\n", obj1.x);
    printf("%f\n", obj1.y);
}

void gun(struct Demo *ptr){
    printf("%d\n", (*ptr).x);
    printf("%f\n", (*ptr).y);
}

void main(){
    struct Demo obj = {10, 20.2};
    fun(obj);
    gun(&obj);
}
