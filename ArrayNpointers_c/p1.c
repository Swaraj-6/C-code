// Acessing elements in an array from an array of pointers using pointer to an array


#include <stdio.h>

void main(){

int arr1[] = {10,20,30,40};
int arr2[] = {50,60,70,80};
int arr3[] = {90,100,110,120};

int (*parr[3])[4] = {&arr1, &arr2, &arr3};

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        printf("%d\n", *(*(*(parr+i))+j));
    }
    printf("\n");
}
// printf("%p\n", arr1);
// printf("%p\n", arr2);
// printf("%p\n", arr3);

}
// o/p:
// 10
// 20
// 30
// 40

// 50
// 60
// 70
// 80

// 90
// 100
// 110
// 120











