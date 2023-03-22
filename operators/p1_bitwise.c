#include <stdio.h>

// void main(){
//     int x = 4;
//     int y = 5;

//     int ans ;

//     ans = ++x & ++y;
//     printf("%d\n", ans);

// }

// void main(){
//     int x = 4;
//     int y = 5;

//     int ans ;

//     ans = x-- | ++y;
//     printf("%d\n", ans);
//     printf("%d\n", x);
//     printf("%d\n", y);
// }



// void main(){
//     int x = 4;
//     int y = 5;

//     int ans ;

//     ans = x-- ^ ++y;
//     printf("%d\n", ans);
//     printf("%d\n", x);
//     printf("%d\n", y);
// }

void main(){
    int x = 15;
    int y = 78;
    int ans;

    ans = x<<3;
    printf("%d\n", ans);    //120

    ans = y>>2;
    printf("%d\n", ans);    //19

    ans = x--<<3;
    printf("%d\n", ans);    //120
    printf("%d\n", x);      //14

    ans = ++y>>4;
    printf("%d\n", ans);    //4
    printf("%d\n", y);      //79
}



















