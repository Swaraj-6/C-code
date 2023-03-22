#include<stdio.h>


// void sumfun(int);

// int sum = 0;

// void main(){
//     int arr[5] = {10,20,30,40,50};

//     for(int i=0; i<5; i++){
//         sumfun(arr[i]);
//     }

//     printf("%d\n", sum);
// }

// void sumfun(int x){
//     sum = sum + x;
// }



// void printArr(int *, int);
// void printArr2(int *, int);

// void main(){
//     int arr[] = {10,20,30,40,50};
//     int sizeOfArr = sizeof(arr)/sizeof(int);
//     printArr(arr, sizeOfArr);
//     printArr2(arr, sizeOfArr);
// }

// void printArr(int *ptr, int size){
//     for(int i=0; i<size; i++){
//         printf("%d\n", *(ptr+i));
//     }
// }

// void printArr2(int arr[], int size){
//     for(int i=0; i<size; i++){
//         printf("%d\n", arr[i]);
//     }
// }




// int sumArr(int *,int);

// void main(){
//     int arr[] = {10,20,30,40,50};

//     printf("%d\n",sumArr(arr, 5));
// }


// int sumArr(int *ptr, int size){
//     int sum = 0;
//     for(int i=0; i<size; i++){
//         sum = sum + *(ptr+i);
//     }
//     return sum;
// }



// void main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     int size = sizeof(arr)/sizeof(int);

//     for(int i=0; i<size; i++){
//         printf("%d ,", *(*arr+i));
//     }
// }


// void main(){
//     int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

//     int size = sizeof(arr)/sizeof(int);

//     for(int i=0; i<18; i++){
//         printf("%d ,", *(**arr+i));
//     }
// }


// #include<math.h>

// int diagonalSum1(int (*ptr)[3], int, int, int);
// int diagonalSum2(int (*)[3], int);

// void main(){
//     int arr[3][3] = {1,2,3,
//                     4,5,6,
//                     7,8,9};

//     int size = sizeof(arr)/sizeof(int);    

//     diagonalSum1(arr, size, 3, 3);
//     diagonalSum2(arr, size);
// }

// int diagonalSum1(int (*ptr)[3], int size, int row, int col){
//     int sum = 0;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if (i == j){
//                 sum = sum + (*(*(ptr+i)+j));
//             }
//         }
//     }

//     printf("%d\n",sum);
// }


// int diagonalSum2(int (*ptr)[3], int size){
//     int sum = 0;
//     for (int i=0; i<size; i++){
//         printf("%d\n", *(*ptr + i));
//         i=i+3;
//     }
// }


// void fun(int (*ptr)[3], int size){
//     for(int i=0; i<size; i++){
//         printf("%d\n", *(*ptr+i));
//     }
// }

// void main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(arr)/sizeof(int);
//     fun(arr, size);
// }


void fun(int (*ptr)[3][3], int size){
    for(int i=0; i<size; i++){
        printf("%d\n", *(**ptr+i));
    }
}

void main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    fun(&arr, size);
}











