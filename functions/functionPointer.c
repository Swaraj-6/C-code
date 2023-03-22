#include<stdio.h>

// void fun(int x, int y){
//     printf("%d\n", x+y);
// }

// void main(){
//     void (*ptr)(int, int) = &fun;

//     ptr(10,20);
// }




// void fun(int x, int y){
//     printf("%d\n", x+y);
//     printf("%d\n", x+y);
// }

// void main(){
//     void (*ptr)(int, int) = &fun;

//     ptr(10,20);
//     printf("%p\n", ptr);

//     ptr++;
//     ptr(30,40);
//     printf("%p\n", ptr);

// }




/////// Array of function pointer////////


// void add(int x, int y){
//     printf("%d\n", x+y);
// }

// void sub(int x, int y){
//     printf("%d\n", x-y);
// }

// void mult(int x, int y){
//     printf("%d\n", x*y);
// }

// void div(int x, int y){
//     printf("%d\n", x/y);
// }



// void main(){
//     void (*ptr[4])(int, int) = {add, sub, mult, div};

//     for(int i=0; i<4; i++){
//         ptr[i](30,20);
//     }
// }





///////////////////////Passing Function to a function///////////////////////


// void add(int x, int y){
//     printf("%d\n", x+y);
// }

// void fun(void (*ptr)(int, int)){
//     ptr(10,20);
// }

// void main(){
//     fun(add);
// }




//////////////////////// Returning multiple values from function///////////////////////


void fun(int x, int y, int *ptradd, int *ptrsub){
    *ptradd = x+y;
    *ptrsub = x-y;
}


void main(){
    int x = 10, y = 20 ,add, sub;

    fun(x, y, &add, &sub);
    printf("%d\n", add);
    printf("%d\n", sub);
}




















