// Outline
// 1) Restaurant Bill
// Include libraries
// Declare and initialize variables: Salad, Soup, Sandwich, Pizza, Input, etc.
// Randomly choose between one food out of the four for the base meal cost
// Calculate tax and tip based off randomly chosen food, declare/initialize variables to hold calculations
// Display meal cost, tax amount, tip amount, and total bill

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float salad = 9.95;
float soup = 4.55;
float sandwich = 13.25;
float pizza = 22.35;

float taxAmt;
float tipAmt;
float taxCalc;
float tipCalc;
float totalBill;

time_t t;

int main () {
//Random integer assignment
srand((unsigned) time (&t));
int randInt = rand() % 4;

//Food and meal assignment
printf("Enter a tax percentage:");
scanf("%f", &taxAmt);

printf("Enter a tip percentage:");
scanf("%f", &tipAmt);

if(randInt == 0){
    taxCalc = (taxAmt * (salad/100));
    tipCalc = (tipAmt * ((salad + taxCalc)/100));
    totalBill = salad + taxCalc + tipCalc;
    printf("You had salad: $%.2f, tax is: %.2f percent, tip is: %.2f percent, the total is: $%.2f", salad, taxAmt, tipAmt, totalBill);
}
else if(randInt == 1){
    taxCalc = (taxAmt * (soup/100));
    tipCalc = (tipAmt * ((soup + taxCalc)/100));
    totalBill = soup + taxCalc + tipCalc;
    printf("You had soup: $%.2f tax is: %.2f percent, tip is %.2f percent, the total is: $%.2f", soup, taxAmt, tipAmt, totalBill);
}
else if(randInt == 2){
    taxCalc = (taxAmt * (sandwich/100));
    tipCalc = (tipAmt * ((sandwich + taxCalc)/100));
    totalBill = sandwich + taxCalc + tipCalc;
    printf("You had a sandwich: $%.2f, tax is %.2f percent, tip is %.2f percent, the total is: $%.2f", sandwich, taxAmt, tipAmt, totalBill);
}
else{
    taxCalc = (taxAmt * (pizza/100));
    tipCalc = (tipAmt * ((pizza + taxCalc)/100));
    totalBill = pizza + taxCalc + tipCalc;
    printf("You had pizza: $%.2f, tax is %.2f percent, tip is %.2f percent, the total is: $%.2f", pizza, taxAmt, tipAmt, totalBill);
}
}
