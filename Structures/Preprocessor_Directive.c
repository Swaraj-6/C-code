#include<stdio.h>
// #define xyz 10

// void main(){
//     printf("%d\n", xyz);
// }


// #define int char

// void main(){
//     printf("%ld\n", sizeof(int));
// }


// #define add(a,b) a+b
// #define sqr(a) a*a

// void main(){
//     int x = 10, y = 20;
//     printf("%d\n", add(x,y));
//     printf("%d\n", sqr (x));
// }


// void main(){
//     printf("%s\n", __FILE__); 
//     printf("%s\n", __DATE__);
//     printf("%s\n", __TIME__);
//     printf("%d\n", __LINE__);
// }


#include "stdio.h"
#define access 0

void main(){
    #if access
    printf("Access Per...\n");
    #else
    printf("Not - Access\n");
    #endif

    printf("EOF\n");
}