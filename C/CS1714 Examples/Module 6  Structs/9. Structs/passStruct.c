#include <stdio.h>;

typedef struct FruitStand_struct {
   int numPlums;
   int numPears;
} FruitStand;

FruitStand AddFruits(FruitStand stand1, FruitStand stand2) {
   FruitStand newStand;

   newStand.numPlums = stand1.numPlums + stand2.numPlums;
   newStand.numPears = stand1.numPears + stand2.numPears;

   return newStand;
}

int main() {
   FruitStand stand1;
   FruitStand stand2;
   FruitStand standTotals;

   stand1.numPlums = 11;
   stand1.numPears = 9;

   stand2.numPlums = 1;
   stand2.numPears = 3;

   standTotals = AddFruits(stand1, stand2);

   printf("%d Plums\n", standTotals.numPlums);
   printf("%d Pears\n", standTotals.numPears);

   return 0;
   } {