#include<stdio.h>

// void main()
// {
//     int i, size;
//     printf("Enter the starting point\n");
//     scanf("%d",&i);
//     printf("Enter the ending point\n");
//     scanf("%d",&size);

//     while(i<=size)
//     {
//         if(i%4==0 && i%5==0)
//         {
//             printf("%d\n",i);
//         }
//         i++;
//     }
// }


// void main()
// {
//     int x = 546;
//     int rem;

//     while(x!=0)
//     {
//         rem = x%10;
//         printf("%d\n",rem);
//         x = x/10;
//     }
// }

void main()
{
    int x = 546;
    int rem;

    while(x!=0)
    {
        rem = x%10;
        printf("%d\n",rem*5);
        x = x/10;
    }
}



















