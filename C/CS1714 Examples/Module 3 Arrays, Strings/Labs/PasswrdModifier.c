#include <stdio.h>
#include <string.h>
#define MAX_CHAR 50

/*
*	Program takes in a user password and makes it less
*	vulnerable to security threats by replacing char's using 
*	a list of char's and appending '!'. Assume the string does
*	not contain spaces and will always be less than 50 char's
*/
int main(int argc, char* argv[]) {

   char userStr[MAX_CHAR];
   int i;
   
   scanf("%s", userStr);
   
   for (i = 0; userStr[i] != '\0'; i++){
      switch (userStr[i]){
         case 'i':
            userStr[i] = '1';
            break;
         
         case 'a':
            userStr[i] = '@';
            break;
         
         case 'm':
            userStr[i] = 'M';
            break;
            
         case 'B':
            userStr[i] = '8';
            break;
         
         case 's':
            userStr[i] = '$';
            break;
      }  
   }
   
   printf("%s!\n", userStr);

   return 0;
}
