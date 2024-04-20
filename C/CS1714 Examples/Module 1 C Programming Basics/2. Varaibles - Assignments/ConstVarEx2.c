#include <stdio.h>

int main(void) {
   int shipWeightPounds;
   int shipCostCents = 0;
   const int FLAT_FEE_CENTS = 75;
   const CENTS_PER_POUND = 25;
   
   scanf("%d\n", &shipWeightPounds);
   shipCostCents = (shipWeightPounds * CENTS_PER_POUND) + FLAT_FEE_CENTS;

   printf("Weight(lb): %d, Flat fee(cents): %d, Cents per pound: %d\nShipping cost(cents): %d\n",
          shipWeightPounds, FLAT_FEE_CENTS, CENTS_PER_POUND, shipCostCents);

   return 0;
}