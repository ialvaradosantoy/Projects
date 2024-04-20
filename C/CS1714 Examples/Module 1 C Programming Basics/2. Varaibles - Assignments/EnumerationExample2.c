#include <stdio.h>

int main(void) {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};
   enum GroceryItem userItem;

   userItem = GR_APPLES;

  if((userItem == 0) || (userItem == 1)){
     printf("Fruit\n");
  }
  else if ((userItem == 2) || (userItem == 3)){
     printf("Drink\n");
  }
  else {
     printf("Unknown\n");
  }
   return 0;
}