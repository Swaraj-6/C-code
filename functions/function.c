#include<stdio.h>

// void fun(int x){
//     printf("%d\n",x);
// }

// void main()
// {
//     fun('A');
//     fun(10);
//     fun(20.2f);
//     fun(35.50);
// }



// void fun(int *x){
//     printf("%p\n",x);
// }

// void main()
// {
//     int a = 10;
//     fun(a);      // warning!!!
// }




// void funarr1(int* arr){
//     printf("%p\n", arr);
// }

// void funarr(int (*arr)[4]){
//     printf("%p\n", arr);
// }

// void main()
// {
//     int arr1[] = {10,20,30,40};

//     funarr(&arr1);

//     funarr1(arr1);


//     funarr1(&arr1[1]);
// }




// void fun(int **ptr){
//     printf("%d\n", **ptr);
// }

// void main()
// {
//     int x = 10;

//     int *ptr1 = &x;
//     int **ptr2 = &ptr1;

//     fun(ptr2);      //10
//     fun(&ptr1);     //10
// }




// void fun(int);

// void main(){
//     fun(10);
// }

// void fun(int x){
//     printf("%d\n", x);
// }










