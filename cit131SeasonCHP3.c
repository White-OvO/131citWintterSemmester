
// #include <stdio.h>

// // Define the value of each coin type in cents
// #define DOLLAR 100
// #define QUARTER 25
// #define DIME 10
// #define NICKEL 5
// #define PENNY 1

// // Define the names of each coin
// char* dollarName = "Dollar";
// char* quarterName = "Quarter";
// char* dimeName = "Dime";
// char* nickelName = "Nickel";
// char* pennyName = "Penny";

// // A function that takes the change amount and the coin value as parameters and returns the number of coins needed
// int getCoins(int change, int coin) {
//   // Divide the change by the coin value and return the quotient
//   return change / coin;
// }

// // A function that takes the change amount and the coin value as parameters and returns the remaining change after using the coins
// int getRemainder(int change, int coin) {
//   // Divide the change by the coin value and return the remainder
//   return change % coin;
// }

// // A function that takes the number of coins and the coin name as parameters and prints the output in the correct format
// void printOutput(int coins, char* name) {
//   // Check if the number of coins is zero
//   if (coins == 0) {
//     // Do nothing
//     return;
//   }

//   // Check if the number of coins is one
//   if (coins == 1) {
//     // Print the output with the singular coin name
//     printf("1 %s\n", name);
//   } else {
//     // Print the output with the plural coin name
//     printf("%d %ss\n", coins, name);
//   }
// }

// int main() {
//   // Declare a variable to store the change amount
//   int change;

//   // Prompt the user to enter the change amount
//   printf("Enter the change amount in cents:\n");
//   scanf("%d", &change);

//   // Check if the change amount is zero or negative
//   if (change <= 0) {
//     // Print "No change"
//     printf("No change\n");
//     return 0;
//   }

//   // Declare variables to store the number of coins for each coin type
//   int dollars, quarters, dimes, nickels, pennies;

//   // Calculate the number of dollars and the remaining change
//   dollars = getCoins(change, DOLLAR);
//   change = getRemainder(change, DOLLAR);

//   // Calculate the number of quarters and the remaining change
//   quarters = getCoins(change, QUARTER);
//   change = getRemainder(change, QUARTER);

//   // Calculate the number of dimes and the remaining change
//   dimes = getCoins(change, DIME);
//   change = getRemainder(change, DIME);

//   // Calculate the number of nickels and the remaining change
//   nickels = getCoins(change, NICKEL);
//   change = getRemainder(change, NICKEL);

//   // Calculate the number of pennies and the remaining change
//   pennies = getCoins(change, PENNY);
//   change = getRemainder(change, PENNY);

//   // Print the output for each coin type
//   printOutput(dollars, dollarName);
//   printOutput(quarters, quarterName);
//   printOutput(dimes, dimeName);
//   printOutput(nickels, nickelName);
//   printOutput(pennies, pennyName);






////////////////////                                                                            
////////////////////                                                                    
////////////////////
////////////////////
////////////////////    
////////////////////                3.25   CHPATER 3 




/*

A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate 
around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year
 is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year
  are:

*/




// #include <stdio.h>
// #include <stdbool.h>

// int main(void) {
//    int inputYear;
//    bool isLeapYear = false;
   
//    scanf("%d", &inputYear);
//    /* Type your code here. */
// if( inputYear % 4 == 0){
//    // every four years
//    if (inputYear % 100 == 0) { 
//       if(inputYear % 400 == 0) {
//          isLeapYear = true;// century leap yer
//     }
//          else { // century non-leap year
//             isLeapYear = false;
//          }
//       }
//       else { // non-century leap year
//          isLeapYear = true;
//       }
//    } // missing curly brace added
//    else { // non-leap year
//       isLeapYear = false;
//    }
   
//    if (isLeapYear) {
//       printf("%d - leap year\n", inputYear);
//    }
//    else {
//       printf("%d - not a leap year\n", inputYear);
//    }
   



  return 0;
}
