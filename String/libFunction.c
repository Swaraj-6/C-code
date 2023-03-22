#include <stdio.h>
#include <string.h>


// int mystrlen(char *str){
//     int count = 0;

//     while(*str != '\0'){
//         count++;
//         str++;
//     }
//     return count;
// }

// void main(){
//     char name[10] = {'K', 'L', 'R', 'a', 'h', 'u', 'l', '\0'};
//     char *str = "Virat Kohli";

//     // int lenName = strlen(name);
//     // int lenstr = strlen(str);

//     printf("%d\n", mystrlen(name));
//     printf("%d\n", mystrlen(str));
// }




// int mystrcpy(char *dest, char *src){
//     while(*src != '\0'){
//         *dest = *src;
//         dest++;
//         src++;
//     }
//     *dest='\0';
// }

// void main()
// {
//     char *str1 = "Hardik Pandya";
//     char str2[20];

//     // strcpy(str2, str1);

//     mystrcpy(str2,str1);

//     puts(str1);
//     puts(str2);
// }




// void mystrcat(char *dest,char *src){
//     while(*dest != '\0'){
//         dest++;
//     }
//     while(*src != '\0'){
//         *dest = *src;
//         dest++;
//         src++; 
//     }
//     *dest = '\0';
// }

// void main(){
//     char *str1 = " Kakade";
//     char str2[50] = {'S' ,'w' ,'a' ,'r' ,'a' ,'j', '\0'};

//     mystrcat(str2, str1);

//     puts(str1);
//     puts(str2);
// }




// int mystrcomp(char *str1, char *str2){
//     while(*str1 != '\0'){
//         if(*str1 == *str2){
//             str1++;
//             str2++;
//         }else{
//             return str1-str2;
//         }
//     }
//     return 0;
// }


// void main(){
//     char *str1 = "Swaraj";
//     char *str2 = "Swaraj";

//     int diff = 1;

//     if(strlen(str1) == strlen(str2)){
//         diff = mystrcomp(str1,str2);
//     }

//     if(diff == 0){
//         printf("Strings are equal");
//     }
//     else{
//         printf("Strings are not equal");
//     }
// }




// void mystrrev(char *str1){
//     char *temp = str1;
//     while(*temp != '\0'){
//         temp++;
//     }
//     temp--;
//     char ch;
//     while(str1<temp){
//         ch = *str1;
//         *str1 = *temp;
//         *temp = ch;
//         str1++;
//         temp--;
//     }
// }

// void main(){
//     char str[10] = {'s', 'w', 'a', 'r', 'a', 'j', '\0'};
//     mystrrev(str);
//     puts(str);

// }




// int mystrcompic(char *str1, char *str2){
//     while(*str1 != '\0'){
//         if(*str1 == *str2|| *str1-*str2 == -32 || *str1-*str2 == 32){
//             str1++;
//             str2++;
//         }else{
//             return str1-str2;
//         }
//     }
//     return 0;
// }


// void main(){
//     char *str1 = "Swaraj";
//     char *str2 = "swaraj";

//     int diff = 1;

//     if(strlen(str1) == strlen(str2)){
//         diff = mystrcompic(str1,str2);
//     }

//     if(diff == 0){
//         printf("Strings are equal\n");
//     }
//     else{
//         printf("Strings are not equal\n");
//     }
// }



// void mystrlwr(char *str){
//     while(*str != '\0'){
//         if(*str >= 65 && *str<=90){
//             *str += 32;
//         }
//         str++;
//     }
//     *str = '\0';
// }

// void mystrupr(char *str){
//     while(*str != '\0'){
//         if(*str >= 97 && *str<=122){
//             *str -= 32;
//         }
//         str++;
//     }
//     *str = '\0';
// }

// void main(){
//     char str[10] = {'S' ,'w' ,'A' ,'r' ,'A' ,'j' ,'\0'};
//     puts(str);
//     mystrlwr(str);
//     puts(str);
//     mystrupr(str);
//     puts(str);
// }


























