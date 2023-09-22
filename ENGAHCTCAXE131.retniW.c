/*
Write a program with total change amount as an integer input, and output the change using the fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

*/
/*

input : 45 

output:
     1 quarter 
     2 Dimes


input : 156

output : 
    1 Dollar
    2 Quarters
    1 Nickel
    1 Penny

*/



#include <stdio.h>

int main(void) {
   int totalChangeAmount;
   scanf("%d", &totalChangeAmount);

   int quarter = 25;
   int dime = 10; 
   int nickle = 5;
   int penny = 1;
   int dollar = 100;

int totalQuarters = 0;
int totalDimes = 0;
int totalNickles = 0;
int totalPenny = 0;
int totalDollars = 0;
while (totalChangeAmount > 0) {
  if (totalChangeAmount >= dollar) {
     totalChangeAmount -= dollar;
     totalDollars++;
  }
  
  else if (totalChangeAmount >= quarter) {
      totalChangeAmount -= quarter;
      totalQuarters++;
   }
   else if (totalChangeAmount >=  dime) {
      totalChangeAmount -= dime;
      totalDimes++;
   }
   else if (totalChangeAmount >= nickle) { 
      totalChangeAmount -= nickle;
      totalNickles++;
}
else if (totalChangeAmount >= penny) { 
   totalChangeAmount -= penny;
   totalPenny++;
}
// else 
// printf("No change");


}
if (totalDollars > 0) {
        printf("%d %s\n", totalDollars, totalDollars > 1 ? "Dollars" : "Dollar");
    }
    if (totalQuarters > 0) {
        printf("%d %s\n", totalQuarters, totalQuarters > 1 ? "Quarters" : "Quarter");
    }
    if (totalDimes > 0) {
        printf("%d %s\n", totalDimes, totalDimes > 1 ? "Dimes" : "Dime");
    }
    if (totalNickles > 0) {
        printf("%d %s\n", totalNickles, totalNickles > 1 ? "Nickels" : "Nickel");
    }
    if (totalPenny > 0) {
        printf("%d %s\n", totalPenny, totalPenny > 1 ? "Pennies" : "Penny");
    }
    if (totalDollars == 0 && totalQuarters == 0 && totalDimes == 0 && totalNickles == 0 && totalPenny == 0) {
        printf("No change\n");
    }

   return 0;
}