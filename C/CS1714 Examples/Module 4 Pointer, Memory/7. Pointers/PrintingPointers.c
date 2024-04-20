#include <stdio.h>

*/
*	Printing pointers 
*/
int main(int argc, char* argv[]) {
   int* numItemsPointer;
   int numItems;

   scanf("%d", &numItems);

   if (numItems < 0){
      numItemsPointer = NULL;
   }
   else{
      numItemsPointer = &numItems;
      *numItemsPointer = ((*numItemsPointer) * 10);
   }

   if (numItemsPointer == NULL) {
      printf("Items is negative\n");
   }
   else {
      printf("Items: %d\n", *numItemsPointer);
   }

   return 0;
}