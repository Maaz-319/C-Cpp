#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void main()
{
    char player;
    int computer_random_choice;
    char *computer_options[3];
    computer_options[0] = "Rock";
    computer_options[1] = "Paper";
    computer_options[2] = "Scissors";
    srand(time(0));
    computer_random_choice = rand() % 3;
    printf("\n\tEnter {R}ock, {P}aper, {S}cissors: ");
    scanf("%c", &player);
    printf("\n\n\tComputer: %s\n\n", computer_options[computer_random_choice]);
    if (player == 'P'  && computer_random_choice == 1)
    {
        printf("\n\tMatch Tied!\n");
    } else if(player == 'R'  && computer_random_choice == 0){
        printf("\n\tMatch Tied!\n");

    } else if(player == 'S'  && computer_random_choice == 2){
        printf("\n\tMatch Tied!\n");

    } else if(player == 'R'  && computer_random_choice == 1){
        printf("\n\tComputer Wins!\n");

    } else if(player ==  'P' && computer_random_choice == 0){
        printf("\n\tPlayer Wins!\n");
    } else if(player ==  'S' && computer_random_choice == 0){
        printf("\n\tComputer Wins!\n");
    } else if(player == 'R'  && computer_random_choice == 2){
        printf("\n\tPlayer Wins!\n");
    } else if(player == 'S'  && computer_random_choice == 1){
        printf("\n\tPlayer Wins!\n");
    } else if(player ==  'P' && computer_random_choice == 2){
        printf("\n\tComputer Wins!\n");
    }
getch();
    


}