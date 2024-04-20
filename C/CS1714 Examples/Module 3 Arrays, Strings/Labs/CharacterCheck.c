#include <stdio.h>
#include <string.h>
#define MAX_WORDS 20
#define MAX_CHAR 10

/*
*	Program takes in an integer , multiple words, and a
*	char. Integer determines number of words, output is the 
*	words that contain the char
*/
int main(int argc, char* argv[]) {
   int userNum; 
   int i;
   char wordArr[MAX_WORDS][MAX_CHAR];
   char str[MAX_CHAR];
   char userChar;
   
   do{  
   scanf("%d", &userNum);
   } while(userNum >= MAX_WORDS);
   
   for (i = 0; i < userNum; i++){
      do{
      scanf("%s", str);
      } while (strlen(str) >= MAX_CHAR);
      
      strcpy(wordArr[i], str);
   }
   
   scanf(" %c", &userChar);
   
   for (i = 0; i < userNum; i++){
      if (strchr(wordArr[i], userChar) != NULL){ 
         printf("%s,", wordArr[i]);
      }
   }
   
   return 0;
}
