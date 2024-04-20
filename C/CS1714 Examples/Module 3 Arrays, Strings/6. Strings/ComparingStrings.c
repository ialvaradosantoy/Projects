#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
   char userWord[50];
   
   printf("Enter a word: ");
   scanf("%s", userWord);
   
   if (strcmp(userWord, "Voldemort") == 0) {
      printf("He who must not be named\n");
   }
   else {
      printf("%s\n", userWord);
   }
   
   return 0;
}