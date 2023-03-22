#include <stdio.h>

// void main()
// {
//     printf("Start Main \n");
//     int x = 0;
//     int y = 20;
//     if(x)
//     {
//         printf("In first if block\n");  // will not print
//     }
//     if(y)
//     {
//         printf("In second if block\n");     //will print
//     }
//     printf("End main\n");
// }

// void main()
// {
//     printf("Start Main \n");
//     char ch1 = 'A';
//     char ch2 = 48;
//     if(ch1)
//     {
//         printf("In first if block\n");  // will print
//     }
//     if(ch2)
//     {
//         printf("In second if block\n");     //will print
//     }
//     printf("End main\n");
//     printf("%d \n", ch2);
// }

// void main()
// {
//     printf("Start Main \n");
//     char ch1 = 'A';
//     char ch2 = '48';
//     if(ch1)
//     {
//         printf("In first if block\n");  // will print
//     }
//     if(ch2)
//     {
//         printf("In second if block\n");     //will print
//     }
//     printf("End main\n");

//     printf("%c \n",ch2);
// }

// void main()
// {
//     printf("Start Main \n");
//     int x = 10;
//     char ch1 = 'A';
//     char ch2 = 97;
//     char ch3 = 128;

//     printf("%d \n",x);
//     printf("%c \n",ch1);
//     printf("%c \n",ch2);
//     printf("%c \n",ch3);
// }

// void main()
// {
//     int x = 1;
//     printf("Start code \n");
//     if(--x)
//     {
//         printf("In first if\n");
//     }
//     if(++x || x++)
//     {
//         printf("In second if\n");
//     }
//     printf("%d\n",x);
// }

// void main()
// {
//     int x;
//     printf("Enter a number\n");
//     scanf("%d", &x);

//     if (x % 2 == 0)
//     {
//         printf("Value is divisible by two\n");
//     }
//     else
//     {
//         printf("Value is not divisible by 2\n");
//     }
// }

void main(){
    int x;
    printf("Enter marks\n");
    scanf("%d",&x);
    if(x >= 90){
        printf("Exellent\n");
    }else if (x<90 && x>=70)
    {
        printf("Very good\n");
    }else if(x<70 && x >=50){
        printf("Good\n");
    }else if(x<50 && x>=35){
        printf("Pass\n");
    }else{
        printf("Fail\n");
    }
    
}























