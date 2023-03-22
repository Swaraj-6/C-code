#include <stdio.h>

// void main()
// {
//     int arr[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {10, 11, 12, 13, 14, 15, 16, 17, 18}};

//     printf("%ld\n", sizeof(arr));

//     printf("Array elements are: \n");

//     for (int plane = 0; plane < 2; plane++)
//     {
//         for (int row = 0; row < 3; row++)
//         {
//             for (int col = 0; col < 3; col++)
//             {
//                 printf("%d ", arr[plane][row][col]);
//             }
//             printf("\n");
//         }
//         printf("//////////////////\n");
//     }
//     int sum1 = 0, sum2 = 0;

//     for (int plane = 0; plane < 2; plane++)
//     {
//         for (int row = 0; row < 3; row++)
//         {
//             for (int col = 0; col < 3; col++)
//             {
//                 if(plane == 0 && row == 0){
//                     sum1 = sum1 + arr[plane][row][col]; 
//                 }
//                 if(plane == 1 && row == 0){
//                     sum2 = sum2 + arr[plane][row][col]; 
//                 }
//             }
//         }
//     }
//     printf("Sum1 is %d\n", sum1);
//     printf("Sum2 is %d\n", sum2);
//     printf("Sum is %d\n", sum1+sum2);
// }



// void main()
// {
//     int pln, row, col;
//     printf("Enter Plane, row, col\n");
//     scanf("%d",&pln);
//     scanf("%d",&row);
//     scanf("%d",&col);

//     int arr[pln][row][col];
//     printf("Enter the elements in array\n");

//     for (int i = 0; i < pln; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             for (int k = 0; k < col; k++)
//             {
//                 scanf("%d",&arr[i][j][k]);
//             }
//         }
//     }

//     int sum1=0, sum2=0;

//     for (int i = 0; i < pln; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             for (int k = 0; k < col; k++)
//             {
//                 printf("%d ", arr[i][j][k]);
//                 if(i == 0 && j == 0){
//                     sum1 = sum1 + arr[i][j][k]; 
//                 }
//                 if(i == 1 && j == 0){
//                     sum2 = sum2 + arr[i][j][k]; 
//                 }
//             }
//             printf("\n");
//         }
//         printf("//////////////////\n");
//     }
//     printf("Sum1 is %d\n", sum1);
//     printf("Sum2 is %d\n", sum2);
//     printf("Sum is %d\n", sum1+sum2);
// }




void main(){
    int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<18; i++){
        printf("%d ,", *(**arr+i));
    }
}


