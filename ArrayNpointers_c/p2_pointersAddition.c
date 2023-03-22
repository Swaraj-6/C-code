#include<stdio.h>

// void main()
// {
//     int x = 10;
//     int y = 20;

//     int *ptr1 = &x;
//     int *ptr2 = &y;

//     printf("%d\n",*ptr1+*ptr2);     //30
//     // printf("%p\n",ptr1+ptr2);       //error: invalid operands to binary + (have ‘int *’ and ‘int *’)

// }


// void main()
// {
//     int x = 10;
//     int y = 20;
//     int *ptr = &x;

//     printf("%d\n",*ptr);    //10
//     printf("%d\n",*(ptr+1));    //20
// }




// void main()
// {
//     char ch1 = 'x';
//     char ch2 = 'y';
//     char ch3 = 'z';

//     char *ptr = &ch1;

//     printf("%c\n",*ptr);
//     printf("%p\n",ptr);

//     printf("%c\n",*(ptr+1));
//     printf("%p\n",(ptr+1));    

//     printf("%c\n",*(ptr+2));
//     printf("%p\n",(ptr+2)); 
// }




// void main()
// {
//     char ch1 = 'x';
//     char ch2 = 'y';
//     char ch3 = 'z';

//     char *ptr = &ch1;

//     printf("%c\n",*ptr);
//     printf("%p\n",ptr);

//     printf("%c\n",*(ptr+1.5));  //error only integer can be added to pointers
//     printf("%p\n",(ptr+1.5));    

// }


// void main()
// {
//     char ch1 = 'x';
//     char ch2 = 'y';
//     char ch3 = 'z';

//     char *ptr = &ch1;

//     printf("%c\n",*ptr);
//     printf("%p\n",ptr);

//     printf("%c\n",*(ptr+'A'));
//     printf("%p\n",(ptr+'A'));    

// }



// void main()
// {
//     int arr[] = {10,20,30,40,50};

//     int *ptr1 = &(arr[0]);
//     int *ptr2 = &(arr[3]);

//     printf("%d\n", *ptr1);
//     printf("%d\n", *ptr2);

//     printf("%ld\n", ptr2 - ptr1);
//     printf("%ld\n", ptr1 - ptr2);

// }


// void main()
// {
//     int arr[] = {10,20,30,40};

//     int *ptr1 = &(arr[0]);
//     int *ptr2 = &(arr[1]);

//     // int x = ptr1 - ptr2;

//     // printf("%d\n",x);
//     printf("%d\n",((*ptr1)++));
//     printf("%d\n",((*ptr1)++));
//     // printf("%ld\n", ptr1*ptr2);      // error: invalid operands to binary * (have ‘int *’ and ‘int *’)
// }



















