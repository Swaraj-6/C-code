#include<stdio.h>

// void main()
// {
//     int x=10;

//     int *ptr1 = &x;
//     int *ptr2 = x;  // out of the process

//     printf("%p\n",ptr1);
//     printf("%p\n",ptr2);
// }



// DEREFRENCING OF A POINTER


// void main()
// {
//     int x=10;

//     int *ptr1 = &x;
//     int *ptr2 = x;  // out of the process

//     printf("%p\n",ptr1);
//     printf("%d\n",*ptr1);
//     printf("%d\n",*ptr2);   // Segmentation fault(core dump)
// }



// int a = 10;
// char b ='A';

// void main()
// {
//     float x = 25.5;
//     double d = 35.555;

//     int *ptr1 = &a;
//     char *ptr2 = &b;
//     float *ptr3 = &x;
//     double *ptr4 = &d;

//     printf("%p\n",ptr1);
//     printf("%p\n",ptr2);
//     printf("%p\n",ptr3);
//     printf("%p\n",ptr4);

//     printf("%d\n",*ptr1);
//     printf("%c\n",*ptr2);
//     printf("%f\n",*ptr3);
//     printf("%lf\n",*ptr4);

// }




// void main()
// {
//     int x = 10;
//     int *iptr = &x;
//     printf("%d\n",*iptr);

//     *iptr = 30;
//     printf("%d\n",*iptr);
//     printf("%d\n",x);
// }



// void main()
// {
//     int x = 10;
//     int *iptr = &x;
//     printf("%d\n",*iptr);

//     *iptr = *iptr;
//     printf("%d\n",*iptr);
//     printf("%d\n",x);
// }


// void main()
// {
//     int arr[] = {10,20,30,40,50};
//     int *iptr = &(arr[0]);
//     printf("%d\n",*iptr);

//     iptr++;

//     *iptr = 70;

//     for(int i=0; i<5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }



// void main()
// {
//     int arr[] = {10,20,30,40,50};
//     int *iptr = &(arr[0]);
//     printf("%d\n",*iptr);

//     (*iptr)++;


//     for(int i=0; i<5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
















