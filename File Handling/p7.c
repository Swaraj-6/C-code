#include <stdio.h>

// void main(){
//     printf("Swaraj\n");

//     fclose(stdout);

//     printf("Swaraj\n");
// }


void main(){
    FILE *fp = fopen("sample.txt", "r");

    printf("%c\n", fgetc(fp));
    printf("%c\n", fgetc(fp));

    fclose(fp);

    printf("%c\n", fgetc(fp));
}