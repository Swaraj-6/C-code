#include <stdio.h>

// void main()
// {
//     int x = 10;
//     int y = 20;
//     int z = 30;

//     int* arr[3] = {&x, &y, &z};

//     printf("%ld\n",sizeof(arr));    //24

//     printf("%p\n",arr[0]);      //0X100
//     printf("%p\n",arr[1]);      //0X104
//     printf("%p\n",arr[2]);      //0X108

//     printf("%d\n",*arr[0]);     //10
//     printf("%d\n",*arr[1]);     //20
//     printf("%d\n",*arr[2]);     //30
// }


// void main()
// {
//     int x = 10;
//     char ch = 'A';
//     double d = 20.85;

//     void* arr[3] = {&x, &ch, &d};

//     printf("%p\n",arr[0]);
//     printf("%p\n",arr[1]);
//     printf("%p\n",arr[2]);

//     printf("%d\n",*((int*)(arr[0])));
//     printf("%c\n",*((char*)(arr[1])));
//     printf("%lf\n",*((double*)(arr[2])));
// }



// void main()
// {
//     char arr1[3] = {'A','B','C'};
//     char arr2[3] = {'D','E','F'};
//     char arr3[3] = {'G','H','I'};

//     char* cparr[3] = {arr1, arr2, arr3};

//     printf("%ld\n", sizeof(cparr));

//     cparr[0] = arr1 + 1;
//     cparr[1] = arr2 + 2;
//     cparr[2] = arr3;

//     printf("%c\n",*(cparr[0]));
//     printf("%c\n",*(cparr[1]));
//     printf("%c\n",*(cparr[2]));

// }


// void main()
// {
//     int arr1[3] = {10,20,30};
//     int arr2[3] = {40,50,60};

//     int* iparr[] = {&arr1, &arr2};

//     printf("%p\n",iparr[0]);
//     printf("%p\n",iparr[1]);

//     printf("%d\n",*(iparr[0]+1));
//     printf("%d\n",*(iparr[1]));

// }
















