// Programmer:		Thecanniestbadge
// Date:			06/19/2023
// Program Name:	Calories Burned
// Chapter:			Repetition
// Description:	    This program calculates and displays the amount of calories burned while running for 5 to 20 mins with 3.9 calories burned per minutes incremented by 3 
//                  This program uses three different loops: while, do while, and for loops
#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
    // Since there is no input in this program this program uses the const to go ahead and set every value needed to have this program work
    const double CALORIES_PER_MINUTE = 3.9; // calories burned
    const int START_MINUTES = 5; // start time
    const int END_MINUTES = 20; // end time
    const int INCREMENT = 3; // increment value 
    // These two variables is used for a loop counter and to hold calculated calories
    int i; // loop counter
    int calories; // holds calculated calories


	// *** Your program goes here ***
    // Displays basic information
    printf("You burn %.1f calories every minute you run.\n", CALORIES_PER_MINUTE);
    printf("This shows how many calories you burn if you ran for %d to %d minutes.\n", START_MINUTES, END_MINUTES);
    printf("\n"); // Blank line
    // *** HEADER ***
    printf("\tMinutes\tCalories\n");
    // *** WHILE LOOP ***
    printf("Using a while loop\n");
    i = START_MINUTES;
    while (i <= END_MINUTES) {
        calories = i * CALORIES_PER_MINUTE;
        printf("\t%d\t%d\n", i, calories);
        i += INCREMENT;
    }
    printf("\n"); // Blank line
    // *** DO-WHILE LOOP ***
    printf("Using a do-while loop\n");
    i = START_MINUTES;
    do {
        calories = i * CALORIES_PER_MINUTE;
        printf("\t%d\t%d\n", i, calories);
        i += INCREMENT;
    } while (i <= END_MINUTES);
    printf("\n");// Blank line
    // *** FOR LOOP ***
    printf("Using a for loop\n");
    for (i = START_MINUTES; i <= END_MINUTES; i += INCREMENT) {
        calories = i * CALORIES_PER_MINUTE;
        printf("\t%d\t%d\n", i, calories);
    }
    printf("\n");
	return 0;
} // end main()
