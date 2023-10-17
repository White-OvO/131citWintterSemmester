

#include <stdio.h>
#include <string.h>

/* 




Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in reverse binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
Note: The above algorithm outputs the 0's and 1's in reverse order.

Ex: If the input is:


the output is:

011
6 in binary is 110; the algorithm outputs the bits in reverse.


*/


int main(void) {
   int positiveInteger;

//Write a program that takes in a positive integer as input
  scanf("%d",&positiveInteger); 

  //////////////////////////////
  //      wrong method /////////
  //////////////////////////////


// while(positiveInteger > 0) {
//    printf("%d % 2", positiveInteger);
//    positiveInteger = positiveInteger / 2;

while(positiveInteger > 0) {
   printf("%d", positiveInteger % 2);
   positiveInteger = positiveInteger / 2;

    // printf("\n");     // this changes format of output to 101
//// output format: /////
//// 1
//// 0
//// 1

  return 0;
}

