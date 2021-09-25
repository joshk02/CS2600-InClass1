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

int i;
int n = 10;

time_t t;

int main (){
        srand((unsigned) time(&t));
        // randNum = rand() % maxNum;
        if(randNum == 0){
                randNum++;
        }
        for(i=0; i<n; i++){
                printf("%d\n", rand() % maxNum);
        }




// Introduction
printf("Welcome! The game is to pick a random chosen number between 1 and 10.\n");
printf("Choose your options:\n");
printf("1)Play game\n2)Change max number\n3)Quit game\n\n");

printf("What is your input: ");
scanf("%i", &input);
if (input == 1){
        printf("Please input a number between %i and %i", lowNum, maxNum);
}
else if (input == 2){
        printf("Choose a number you want the max to be; keep in mind you can't go over 10 or choose a negative number: ");
}
else if (input == 3){
        printf("Thanks for playing!");
}

}
