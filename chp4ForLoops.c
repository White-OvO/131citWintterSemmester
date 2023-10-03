// for loops 

// # include <stdio.h>
// int main (void)  { 
//     int i ; 
//     for (i = 0; i > -3; --i){
//         printf("%d",i);
//     }
// }



    
    
    
    
    
    
//    int i ; 
    
    
//////////////////////////////////////////////////////////////////////////////
//example
//////////////////////////////////////////////////////////////////////////////
    
    
    // for (i = 0; i > -2; --i){
    //     printf("%d",i);
    // }

    /// output from school 0-1 
    // output 012








//////////////////////////////////////////////////////////////////////////////
//example
//////////////////////////////////////////////////////////////////////////////
    

    // for (i = 0; i > -1; --i){
    //     printf("%d",i);
    // }
// expected answer is 0 



//////////////////////////////////////////////////////////////////////////////
//example
//////////////////////////////////////////////////////////////////////////////
    // for (i = 0; i > -4; --i){
    //     printf("%d",i);
    // }
// expected 0-1-2-3

// sysout put 012




//////////////////////////////////////////////////////////////////////////////
//example
//////////////////////////////////////////////////////////////////////////////
    

    // for ( i = 1; i < 5; i++){
        
    // }
    // output is 0 1 2 3 4


    // for (i = 1; i <= 5; ++i) {
        // output : 1 2 3 4 5

    /// for (i = 0; i < 10; i = i + 2) 
        // output : 0 2 4 6 8

    // for (i = -3; i <= 3; ++i) {    
        // output : -3 , -2 , -1, 0 , 1 , 2 ,3

     // for (i = 5; i >= 0; --i) {
        /// output : 5 4 3 2 1 0

     //for (i = 0; i < 5; ++i) {
        // output : 0 2 4 6 8





//////////////////////////////////////////////////////////////////////////////
//                  temapture example 
//////////////////////////////////////////////////////////////////////////////
    
        // C to Ferr. 
//  int currC;
//    double equivalentF;
  
//    for (currC = -10; currC <= 40; currC += 5) {   // loop expresion is currC <= 40 
//       equivalentF = (currC * 9.0 / 5.0) + 32.0;
      
//       printf("%d  C is ", currC);           
//       printf("%lf F\n", equivalentF);
//    }

//////////////////////////////////////////////////////////////////////////////
//                      output      
/* 
 -10  C is 14.000000 F
-5  C is 23.000000 F
0  C is 32.000000 F
5  C is 41.000000 F
10  C is 50.000000 F
15  C is 59.000000 F
20  C is 68.000000 F
25  C is 77.000000 F
30  C is 86.000000 F
*/
//////////////////////////////////////////////////////////////////////////////
    








//////////////////////////////////////////////////////////////////////////////
//example
//////////////////////////////////////////////////////////////////////////////
    







/*






*/






/*






*/


#include <stdio.h>
#include <string.h>

/* Program that has a conversation with the user. 
   Uses a if-else statements and a random number (sort of) 
   to mix up the program's responses. */

int main(void) {
  const int TEXT_LIMIT = 1000;    // Size limit for user input
  char userText[TEXT_LIMIT];      // User input
  int rand0_3;                    // Random number 0 - 3

  printf("Tell me something about yourself.\n");
  printf("You can type \"Goodbye\" at anytime to quit.\n\n> ");
  
  fgets(userText, TEXT_LIMIT, stdin);    // Reads a full line of text
  userText[strlen(userText) - 1] = '\0'; // Replaces the newline character

  while (strcmp(userText, "Goodbye") != 0) {
    rand0_3 = strlen(userText) % 4;      // "Random" num. %4 ensures 0-3

    if (rand0_3 == 0) {
      printf("\nPlease explain further.\n\n> ");
    }
    else if (rand0_3 == 1) {
      printf("\nWhy do you say: \"%s\"?\n\n> ", userText);
    }
    else if (rand0_3 == 2) {
      printf("\nI don't think that's right.\n\n> ");
    }
    else if (rand0_3 == 3) {
      printf("\nWhat else can you share?\n\n> ");
    }
    else {
      printf("\nUh-oh, something went wrong. Try again.\n\n");
    }

    fgets(userText, TEXT_LIMIT, stdin);
    userText[strlen(userText)-1] = '\0';
  }
  
  printf("\nIt was nice talking with you. Goodbye.\n\n");

  return 0;
}

