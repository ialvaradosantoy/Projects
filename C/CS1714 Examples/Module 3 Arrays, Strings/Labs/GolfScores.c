#include <stdio.h>
#include <string.h>
#define MAX 15 // max assumed length of strings

int main(int argc, char* argc[]) {

   char str[MAX];
   int par;
   int strokes;
   
   scanf("%d", &par);
   scanf("%d", &strokes);
   
   if (par == 1){
      strcpy(str, "Error");
      printf("%s\n", str);
   }
   else if (strokes == par) {
      strcpy(str, "Par");
      printf("%s\n", str);
   }
   else if (strokes == (par + 1)){
      strcpy(str, "Bogey");
      printf("%s\n", str);
   }
   else if (strokes == (par - 1)){ 
      strcpy(str, "Birdie");
      printf("%s\n", str);
   }
   else if (strokes == (par - 2)){
      strcpy(str, "Eagle");
      printf("%s\n", str);
   }
   else {
      printf("idk");
   }

   return 0;
}