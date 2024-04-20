#include <stdio.h>
#include <string.h>

/*
*	This program reads line(s) of text from the user,
*	assuming each line(s) will not exceed 50 char's,
*	replaces '\n' char with '\0' if applicable,	 
*	stores as a string (character array), reverses
*	and ouputs the string. Program repeats until the
*	user enters "Done", "done", or "d".
*/
int main(int argc, char* argv[]) {

   char str[50];
   char a;
   int i;
   
   fgets(str, 50, stdin);
   for (i = 0; str[i] != '\0'; ++i) {
      if (str[i] == '\n') {
         str[i] = '\0';
      }
   }
   
   while((strcmp(str, "done") != 0) && (strcmp(str, "Done") != 0) && (strcmp(str, "d") != 0)){
    
      for (i = 0; i < (strlen(str) / 2); i++){
         a = str[i];
         str[i] = str[strlen(str) - 1 - i];
         str[strlen(str) - 1 - i] = a;
      }
 
      printf("%s\n", str);
      fgets(str, 50, stdin);
      
      for (i = 0; str[i] != '\0' ; ++i) {
         if (str[i] == '\n') {
            str[i] = '\0';
         }
      }
   }

   return 0;
}
