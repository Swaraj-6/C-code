#include<stdio.h>

// void main()
// {
//     int x = 10;

//     int *iptr = &x;
//     void *vptr = &x;

//     printf("%p\n",iptr);
//     printf("%p\n",vptr);

//     printf("%d\n",*iptr);
//     // printf("%d\n",*vptr);   //error
//     printf("%d\n",*((int*)vptr));
// }


// void main()
// {
//     int x = 10;

//     int *iptr;      //wild pointer

//     int *ptr = NULL;    // Null pointer
//     // int *ptr = 0;

//     printf("%d\n",*iptr);
// }



///////////////////////////////////////////////

// DANGLING POINTER


// int a = 10;
// int b;
// int *iptr = 0;

// void fun()
// {
//     printf("%d\n",a);
//     printf("%d\n",b);
//     int x = 30;
//     iptr = &x;
//     printf("%p\n",iptr);
//     printf("%d\n",*iptr);
// }
// void main()
// {
//     int y = 40;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     fun();
//     printf("%p\n",iptr);
//     printf("%d\n",*iptr);
// }














