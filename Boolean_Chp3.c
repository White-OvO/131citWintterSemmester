#include <stdio.h>
#include <stdbool.h>


/*
Including the ctype.h library via #include <ctype.h> provides access to several functions for working with characters. ctype stands for character type.
*/





int main(void) { 
//#include <iostream>
/*
int main(void) {
   int hotelRate;
   int numYears;

   hotelRate = 150;

   printf("Enter number of years married: ");
   scanf("%d", &numYears);

   if (numYears == 50) {
      printf("Congratulations on 50 years ");
      printf("of marriage!\n");

      hotelRate = hotelRate / 2;
   }

   printf("Your hotel rate: ");
   printf("%d\n", hotelRate);

   int userNum;
   int divRemainder;

   printf("Enter a number: ");
   scanf("%d", &userNum);

   divRemainder = userNum % 2;

   if (divRemainder == 0) {
       printf("%d is even.\n", userNum);
   }
   else {
       printf("%d is odd.\n", userNum);
   }

   printf("Hello world ");

   return 0;
}
*/

/*
code above : Asks the user to enter the number of years they have been married.
If the user has been married for 50 years, it congratulates them and reduces the hotel rate by half.
It then prints the hotel rate.
Next, it asks the user to enter a number.
It checks if the number is even or odd and prints the result.
Finally, it prints “Hello world”.
09/19/2023
*/

/*
int main() {
   double currentTemp;
   double desiredTemp;
   double currentHumidity;
   _Bool isHot, isReallyHot, isHumid, acOn, evapCoolerOn;

isHot = (currentTemp > desiredTemp);
isReallyHot = (currentTemp > (desiredTemp + 5.0));
isHumid = (currentHumidity > 0.50);

if(isReallyHot) { 

    acOn = true;
    evapCoolerOn = true; 

}
else if( isHot && isHumid) {
    acOn = true;
    evapCoolerOn = false; 
}
else if (isHot && !isHumid) {
    acOn = false; 
    evapCoolerOn = true;

}
else {
    acOn = false;
    evapCoolerOn = false;
}
*/

/*

currentTemp, desiredTemp, and currentHumidity are variables that store the current temperature, the desired temperature, and the current humidity respectively.
isHot is a boolean variable that becomes true if the current temperature is greater than the desired temperature.
isReallyHot becomes true if the current temperature exceeds the desired temperature by more than 5.0 degrees.
isHumid becomes true if the current humidity exceeds 50%.
Based on these conditions, the code decides whether to turn on the AC (acOn) and/or the evaporative cooler (evapCoolerOn).

*/



////////////////////////////////////////////////////
////////////////////        
////////////////////        3.12.2

///////////////////
////////////////////


/*
Write a statement that assigns the variable goodGpa with an expression that evaluates to true 
if studentGpa is greater than 2.75.

goodGpa is only true if studentGpa is greater than 2.75

A:   goodGpa = (studentGpa > 2.75);



*/

/*
Q: 
Write a statement that assigns the variable isInAgeRange with an expression that evaluates to 

true if userAge is greater than 13 and less than 21.

*/



/*

isInAgeRange = ( )

_Bool isInAgeRange = (userAge > 13 && userAge < 21);


*/

/* 
revise the if expression above to use the variable isInAgeRange and veryGoodGpa 

if(isInAgeRange && veryGoodGpa) { 
// your code goes here
A: if(isInAgeRange && veryGoodGpa){ 
    studentDiscount = 7.5;

}


}

*/

return 0;


 /*
 Assign isTeenager with true if kidAge is 13 to 19 inclusive. Otherwise, assign isTeenager with false.
 
 #include <stdio.h>
#include <stdbool.h>

int main(void) {
   bool isTeenager;
   int kidAge;

   scanf("%d", &kidAge);

   /* Your solution goes here  */

//isTeenager = (kidAge >= 13 )&&(kidAge <= 19);
  /*
   if (isTeenager) {
      printf("Teen\n");
   }
   else {
      printf("Not teen\n");
   }
*/



/*
Write an expression that evaluates to true if myName is greater than yourName.
*/

/*

A: 

if (stromp(myName, yourName) > 0 )
*/

/* 


*/
/////////////////////////////////////////////// /////////////////////////////////////////////// 
/////////////////////////////////////////////// /////////////////////////////////////////////// 
/////////////////////////////////////////////// syntax for case switch  /////////////////////////////////////////////// 
/////////////////////////////////////////////// /////////////////////////////////////////////// 
/////////////////////////////////////////////// /////////////////////////////////////////////// 
/*  

switch (a) { 
    case 0: 
    print "Zero"
    break ; 

    case 1: 
    print "one"
    break;

    case 2: 
    print "two"
    break ; 

    default 
    print "unknown"
    break;

}


*/

/// 3.14.8 String Length

// userText = "March 17, 2034"

// Q: what does strlen(userText) return ?
  //  A:14 
  // because there are 14 characters in the string 

 //Q: what is the index of the last character in user text?
 //A :   13

 //There are 14 characters, and indexing starts with 0, so the index of the last character is 13.


 // Q: what character does userText[strlen(userText) - 1] evaluate to?
    // A: 4
    //14 - 1 is 13, so userText[strlen(userText) - 1] is the last character.








//userString is initially "Done
// The last character e will be replaced by t.

//userString[strlen(userString) - 1] = 't';
// now rather than done its dont


/*
3.14.1
Assign the size of userInput to stringSize. Ex: if userInput is "Hello", output is:
*/



/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
///
///    solutiuon:  input = Hello 
///    output = 5
/////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <string.h>

int main(void) {
   char userInput[50];
   int stringSize;

   scanf("%s", userInput);
stringSize = strlen(userInput);
  

   printf("Size of userInput: %d\n", stringSize);




*/



/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
///      
///    solutiuon: 
///      input = Hello
///     input2 = H
///     output = the first character of userinput matches firstletter
///             the second character of userinput matches second letter, etc...

/////////////////////////////////////////////////////////////////////////

/*
userInput = "Hello"
firstLetter = "H"

if userInput[0] == firstLetter:
    print("The first character of userInput matches firstLetter.")
else:
    print("The first character of userInput does not match firstLetter.")
*/

///////////////////////////////////////////////////////////
////////////////   second way
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
/*
int main(void) {
   char userInput[50];
   char firstLetter;

   scanf("%s", userInput);
   scanf(" %c", &firstLetter);

   if (userInput[0] == firstLetter ) {
      printf("Found match: %c\n", firstLetter);
   }
   else {
      printf("No match: %c\n", firstLetter);
   }

*/













///////////////////////////////////////////////////////////
////////////////   Enter a two-letter state abbreviation: az
////////////////Capitalized: AZ
////////////////Enter a two-letter state abbreviation: AZ
////////////////Capitalized: AZ
////////////////Enter a two-letter state abbreviation: Mn
////////////////Capitalized: MN
////////////////Enter a two-letter state abbreviation: 5x
////////////////Error: Both are not letters.
////////////////Enter a two-letter state abbreviation: A@
////////////////Error: Both are not letters.
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////



/*

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



*/





   return 0;

}
 

