#include<stdio.h>

// void main()
// {
//     int arr1[] = {1,2,3,4,5,6,7,8,9};
//     int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
//     int arr3[][3] = {{1,2,3},{4,5},{6}};
//     int arr4[][3] = {1,2,3,{4,5,6}};
// }


// void main()
// {
//     int arr1[3] = {1,2,3,4};

//     int arr[][3] = {{1,2,3,4},{5,6},{7,8,9}};

//     printf("%d\n",arr1[3]);
//     printf("%d\n",arr[0][3]);
// }




// void main()
// {
//     int arr[2][3];
//     printf("Enter elements\n");

//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }


//     for(int i=0; i<6; i++)
//     {
//         printf("%p\n",arr[i]);
//     }
// }







// void main()
// {
//     int row, column;

//     printf("Enter the no. of rows and columns\n");
//     scanf("%d",&row);
//     scanf("%d",&column);

//     int arr[row][column];

//     printf("Enter elements\n");
//     int sum = 0;

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<column; j++)
//         {
//             scanf("%d",&arr[i][j]);
//             sum = sum + arr[i][j];
//         }
//     }

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<column; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Sum is %d\n",sum);
// }



// void main()
// {
//     int row, column;

//     printf("Enter the no. of rows and columns\n");
//     scanf("%d",&row);
//     scanf("%d",&column);

//     int arr[row][column];

//     printf("Enter elements\n");
//     int sum = 0;

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<column; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<column; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<column; j++)
//         {
//             if(i==j){
//                 sum = sum + arr[i][j];
//             }
//         }
//     }

//     printf("Sum is %d\n",sum);
// }





// void main()
// {
//     int arr[3][3] = {10,20,30,40,50,60,70,80,90};

//     printf("%d\n",arr[0][2]);
//     printf("%d\n",arr[1][0]);
//     printf("%d\n",arr[2][1]);

//     printf("%p\n",arr);
//     printf("%p\n",arr[0]);
//     printf("%p\n",arr[1]);
//     printf("%p\n",arr[3]);

//     printf("%p\n",&arr[0][2]);
//     printf("%p\n",&arr[1][0]);
//     printf("%p\n",&arr[2][0]);
// }


// void main()
// {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     printf("%p\n",&arr);
//     printf("%p\n",arr);
//     printf("%p\n",arr[0]);
//     printf("%p\n",arr[1]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[0][0]);
// }

void main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++){
        printf("%d ,", *(*arr+i));
    }
}
