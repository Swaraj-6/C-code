#include <stdio.h>

enum friends{
    Swaraj,
    Rohan,
    Yash,
    Tushar
};

void main(){
    enum friends obj = Yash;

    switch(obj){
        case Swaraj:
            printf("Swaraj %d\n", Swaraj);
            break;

        case Rohan:
            printf("Rohan %d\n", Rohan);
            break;

        case Yash:
            printf("Yash %d\n", Yash);
            break;

        default:
            printf("Tushar %d\n", Tushar);

    }
    
}