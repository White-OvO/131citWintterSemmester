#include <stdio.h>

int main() {
       int jerseys[5];
       int ratings[5];
    
       int jerseyToReplace;
       int newJersey;
       int newRating;
           char menuOption;
       int ratingThreshold;
        int jerseyToUpdate;

    // Loop to get input from user
    for (int i = 0; i < 5; i++) {
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &jerseys[i]);
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &ratings[i]);
    }

    // print the roster
    printf("ROSTER\n");
    for (int i = 0; i < 5; i++) {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseys[i], ratings[i]);
    }
    
    // mennu options 
    

    
    
    
    
    
    
   do {
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("\nChoose an option:\n");
        scanf(" %c", &menuOption);
        
        // step (3) Implement the "Output roster" menu option
        
        if ( menuOption == 'o') { 
           printf("\nROSTER\n");
           for (int i = 0; i < 5; i++) { 
              printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseys[i], ratings[i]);
           }
        }
       
        // step (4) Implement the "Update player rating" menu option. Prompt the user for a player's jersey number. Prompt again for a new rating for the player, and then change that player's rating
           else if (menuOption == 'u') {
            printf("\nEnter a jersey number:\n");
            scanf("%d", &jerseyToUpdate);
            for (int i = 0; i < 5; i++) {
                if (jerseys[i] == jerseyToUpdate) {
                    printf("\nEnter a new rating for player:\n");
                    scanf("%d", &newRating);
                    ratings[i] = newRating;
                }
            }
        }
          //Implement the "Output players above a rating" menu option. Prompt the user for a rating. Print the jersey number and rating for all players with ratings above the entered value.
   
        else if (menuOption == 'a') {
            printf("\nEnter a rating:\n");
            scanf("%d", &ratingThreshold);
            printf("\nPlayers above the rating of %d:\n", ratingThreshold);
            for (int i = 0; i < 5; i++) {
                if (ratings[i] > ratingThreshold) {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseys[i], ratings[i]);
                }
            }
        }
        
    
       
     else if (menuOption == 'r') {
            printf("\nEnter the jersey number of the player to replace:\n");
            scanf("%d", &jerseyToReplace);
            for (int i = 0; i < 5; i++) {
                if (jerseys[i] == jerseyToReplace) {
                    printf("\nEnter a new jersey number:\n");
                    scanf("%d", &newJersey);
                    jerseys[i] = newJersey;
                    printf("\nEnter a new rating for the player:\n");
                    scanf("%d", &newRating);
                    ratings[i] = newRating;
                }
            }
        }
        
    } while(menuOption != 'q');


    return 0;
}
