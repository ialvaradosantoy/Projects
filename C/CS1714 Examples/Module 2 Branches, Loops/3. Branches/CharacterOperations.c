#include <stdio.h>
#include <ctype.h>

int main(void) {
   char let0;
   char let1;

   printf("Enter a two-letter state abbreviation: ");
   scanf("%c", &let0);
   scanf("%c", &let1);

   if ( ! (isalpha(let0) && isalpha(let1)) ) {
      printf("Error: Both are not letters.\n");
   }
   else {
      let0 = toupper(let0);
      let1 = toupper(let1);
      printf("Capitalized: %c%c\n", let0, let1);
   }

   return 0;
}