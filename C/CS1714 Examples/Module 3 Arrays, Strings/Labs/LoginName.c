#include <stdio.h>
#include <string.h>
#define MAX_CHAR 50

/*
*	Program creates a login name for a user after user
*	inputs first name, last name, and a four digit integer.
*	Output is is first 5 char's of last name, if last name
*	has less than 5 char's then all last name's char's, 
*	followd by first letter of first name, and then last 
*	two digits of integer. First and last name max 50 char's
*/
int main(int argc, char* argv[]) {
   char first[MAX_CHAR];
   char last[MAX_CHAR];
   char logIn[MAX_CHAR];
   int userNum;
   int i;
   int lastN = 5;
   int len;
   
   do{
      scanf("%s", first);
   } while (strlen(first) >= MAX_CHAR);
   
   do{
      scanf("%s", last);
   } while (strlen(last) >= MAX_CHAR);
      
   scanf("%d", &userNum);
   
   len = strlen(last);
   
   if (len < lastN){
      for (i = 0; last[i] != '\0'; i++){
         logIn[i] = last[i];
      }
   }
   else {
      for (i = 0; i < lastN; i++){
         logIn[i] = last[i];
      }
   }
   
   logIn[i] = first[0];
   
   printf("Your login name: %s%d\n", logIn, (userNum % 100));

   return 0;
}
