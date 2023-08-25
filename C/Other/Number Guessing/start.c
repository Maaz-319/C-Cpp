/*   Program Name: Guesing Game
        ||Writer Info:-||
            Name: Maaz Bin Asif
            Age: 15
            Grade: 10
            Email: maazbinaasif123@outlook.com
*/




#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int user_input, attempts = 0;
    srand(time(0));  // Taking random number.
    int r = rand() % 50; // Assigning variable to it.

    
    printf("\n\t1) Guess a number from 0-50.\n\t2) You have five attempts.\n");
    while(user_input != r && attempts < 5)
    {
        printf("\n\tEnter your guess: ");
        scanf("%i", &user_input);
        if (user_input > r){
            printf("\nEnter Smaller number.\n");
        }else if (user_input < r){
            printf("\nEnter larger number.\n");
        }
        attempts++;
        if (attempts == 5)
        {
            printf("\nAttempts are over! Try Again.\n");
            break;
        }
        
        
    }
    if (user_input == r)
    {
        printf("\n\tCongrats! You got the number. %i was the number.\n\n\n\n", r);
        printf("\n\tMade by Maaz.\n\tEmail-> maazbinaasif123@outlook.com.");
    }
    
        
    

    getch();      
    return 0;
    
}
