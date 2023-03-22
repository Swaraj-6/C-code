#include<stdio.h>

// void fun(int, int);

// void main(){
//     int x, y;
//     printf("Enter value\n");
//     scanf("%d %d", &x, &y);
//     fun(x, y);
// }

// void fun(int x, int y){
//     printf("%d", x+y);
// }



// void fun(int,int,int);

// void main(){
//     int x = 10;
//     int y = 20;
//     int z = 30;

//     fun(x,y,z);
// }

// void fun(int x, int y, int z){
//     printf("Add: %d \n", x+y+z);
// }




// void callByAddress(int*);

// void main(){
//     int x = 10;
//     printf("%d\n",x);

//     callByAddress(&x);
    
//     printf("%d\n",x);

// }

// void callByAddress(int *ptr){
//     printf("%p\n", ptr);

//     *ptr = 50;   
// }




void swap(int*, int*);

void main(){
    int x=10, y=20;
    printf(" x=%d; y=%d\n", x, y);
    swap(&x, &y);
    printf(" x=%d; y=%d\n", x, y);
}

void swap(int *ptr1,int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}















