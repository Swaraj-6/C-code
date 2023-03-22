#include<stdio.h>

// void main(){
//     for(int i=1; i<=5; i++){
//         printf("1 ");
//         if(i == 5){
//             printf("\n");
//         }
//     }


//     for(int j=1; j<=5; j++){
//         printf("*\n");
//     }
// }



// void main()
// {
//     int x;
//     printf("Enter no.\n");
//     scanf("%d",&x);

//     for (int i=1; i<=x; i++){
//         printf("Swaraj\n");
//     }
// }



// void main()
// {
//     for (int i=1; i<=10; i++)
//     {
//         printf("%d\n",i*i);
//     }
// }


// void main()
// {
//     int i;
//     for(int i=1, j=10; i<=j; ++i, --j){
//         printf("%d\n",i);
//         printf("%d\n",j);  
//     }
// }




/////////// Nested for ///////////

// void main()
// {
//     int sum = 65;
//     for (int i =1; i<=4; i++)
//     {
//         for(int j=1; j<=4; j++)
//         {
//             printf("%c ",sum);
//             sum++;
//         }
//         // sum++;
//         printf("\n");
//     }
// }


////////////////////////////////////////////////////////////////////

// a c e
// g i k 
// m o q 


// void main ()
// {
//     char ch = 'a';
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=3; j++)
//         {
//             printf("%c ",ch);
//             ch = ch+2;
//         }
//         printf("\n");
//     }
// }

////////////////////////////////////////////////////////////

// a b d 
// g h j 
// m n p 


// void main ()
// {
//     char ch = 'a';
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=3; j++)
//         {
//             printf("%c ",ch);
//             ch = ch+j;
//         }
//         printf("\n");
//     }
// }



/////////////////////////////////////////////////////////////


// 1 2 3
// 1 2 3
// 1 2 3


// void main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=3; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


///////////////////////////////////////////////////////////


// 1 4 9 
// 1 4 9 
// 1 4 9 

// void main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         int x=1;
//         for(int j=1; j<=3; j++)
//         {
//             printf("%d ",x*x);
//             x++;
//         }
//         printf("\n");
//     }
// }


//////////////////////////////////////////////////////////


// A 
// A B 
// A B C 

// void main()
// {
//     for(int i=1; i<=3; i++)
//     {
//         char ch='A';
//         for(int j=1; j<=i; j++)
//         {
//             printf("%c ",ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }


///////////////////////////////////////////////////////////


// a 
// c e 
// g i k 


// void main ()
// {
//     char ch = 'a';
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             printf("%c ",ch);
//             ch = ch+2;
//         }
//         printf("\n");
//     }
// }


/////////////////////////////////////////////////////////////


// A B C 
// D E 
// F 

// void main(){
//     char ch ='A';
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=3; j>=i; j--){
//             printf("%c ",ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }


////////////////////////////////////////////////////////////


// 1 A 2 B 
// 1 A 2 
// 1 A 
// 1 

// void main()
// {
//     int x; 
//     char ch;
//     for(int i=1; i<=4; i++)
//     {
//         x = 1;
//         ch = 'A';
//         for(int j=4; j>=i; j--){
//             if(j%2==0){
//                 printf("%d ",x);
//                 x++;
//             }else{
//                 printf("%c ",ch);
//                 ch++;
//             }
//         }
//         printf("\n");
//     }
// }


//////////////////////////////////////////////////////////

// ---*
// --**
// -***
// ****

// void main()
// {
//     for(int i=1; i<=4; i++)
//     {
//         for(int j=4-1; j>=i; j--)
//         {
//             printf("-");
//         }
//         for(int k=1; k<=i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }


/////////////////////////////////////////////////////////

// ---A
// --AB
// -ABC
// ABCD

// void main()
// {
//     for(int i=1; i<=4; i++)
//     {
//         char ch ='A';
//         for(int j=4-1; j>=i; j--)
//         {
//             printf("-");
//         }
//         for(int k=1; k<=i; k++)
//         {
//             printf("%c",ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }































