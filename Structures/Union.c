#include <stdio.h>

union book{
    char bname[20];
    char authorname[20];
    int pages;
    // double price;
};

void main(){
    union book bk = {"OS"};
    printf("%p\n", &bk.bname);
    printf("%p\n", &bk.authorname);
    printf("%p\n", &bk.pages);
    // printf("%p\n", &bk.price);

    printf("\n%ld\n", sizeof(bk));
}