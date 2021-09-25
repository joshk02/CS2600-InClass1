// 2) Number guessing game
// Include libraries
// Declare and initialize variables: Input, max number, etc.
// Use if else to wait for input regarding 1,2,3
// Code statements of 1,2,3
// Create new branch and save last max number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lowNum = 1;
int input;
int randNum;
int maxNum = 10;
int guess;


time_t t;

int main(){
        
        srand((unsigned) time(&t));
        // randNum = rand() % maxNum;
        if(randNum == 0){
                randNum++;
        }

        // Introduction
        printf("Welcome! Pick a number between 1 and 10.\n");
        printf("Choose your options:\n");
        printf("1)Play game\n2)Change max number\n3)Quit game\n\n");

        printf("What is your input: ");
        scanf("%i", &input);

        if (input == 1){
                game();
        }
        else if (input == 2){
                printf("Choose a number you want the max to be; keep in mind you can't go over 10 or choose a negative number: ");
                changeMax();
        }
        else if (input == 3){
                printf("Thanks for playing!");
        }
        else{
               printf("Please choose either 1, 2, or 3.");
               main(); 
        }
        return 0;
}

int game(){
        printf("Guess an integer between 1 and %d: ", maxNum);
        scanf("%i", &guess);
        if (guess == randNum){
                printf("Congratulations! You guessed the right number!\n");
                main();
        }
        else if (guess > randNum){
                printf("Your guess was too high. Try again:\n");
                scanf("%i", &guess);
        }
        else if (guess < randNum){
                printf("Your guess was too low. Try again:\n");
                scanf("%i", &guess);
        }
return 0;
}

int changeMax(){
        printf("Choose a number you want the max to be; keep in mind you can't go over 10 or choose a negative number: ");
        scanf("%i", input);
        if (input > maxNum){
                printf("This number is too high, try again:\n");
                scanf("%i", &input);
        }
        else if (input < 0){
                printf("You can't use a negative number, try again:\n");
                scanf("%i", &input);
        }
        else{
                maxNum = input;
                printf("Your new max number is: %i", maxNum);
                game();
        }
}





