#include<stdio.h>

// void main()
// {
//     int arr[5] = {10,20,30,40,50};

//     int *ptr1 = arr;

//     int (*ptr2)[5] = &arr;

//     printf("%p\n",arr);

//     printf("%p\n",*ptr2);
//     printf("%d\n",**ptr2);

// }



void main()
{
    char carr[3] = {'A','B','C'};
    char carr2[3] = {'D','E','F'};


    char *ptr1 = &carr[1];

    char *ptr2 = carr;

    char (*ptr3)[3] = &carr;

    // printf("%p\n",*ptr3);
    // printf("%c\n",**(ptr3+1));


    printf("%c\n",(**ptr3)+2);
    printf("%c\n",*(*ptr3+2));      // Sir's method

}



// void main()
// {
//     int arr1[4] = {10,20,30,40};
//     int arr2[4] = {50,60,70,80};
//     int arr3[4] = {90,100,110,120};

//     int (*iparr[3])[4] = {&arr1, &arr2, &arr3};
//     // int (*ptr1)[3] = &arr1;
//     // int (*ptr2)[3] = &arr2;
//     // int (*ptr3)[3] = &arr3;

//     // int* parr[3] = {(*ptr1)[3], (*ptr2)[3], int (*ptr3)[3]};

//     printf("%p\n",*iparr[0]);
//     printf("%p\n",*iparr[1]);
//     printf("%p\n",*iparr[2]);
// }





















