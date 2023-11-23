#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//void type_slowly();

void run_game(){
    system("cls");
    int X_choice, X_score, O_choice, O_score, x_coordinate, y_coordinate, X_choices[10], O_choices[10], turns_counter=0;
    printf("\t\t| |\t\n\t------------------\n\t\t| |\t\n\t------------------\n\t\t| |\t");
    printf("\nX_choice> ");
    scanf("%d", X_choice);
    printf("\nO_choice> ");
    scanf("%d", O_choice);
    X_choices[turns_counter] = X_choice;
    O_choices[turns_counter] = O_choice;
    turns_counter++;
    system("cls");
    switch(X_choice){
        case 11:
            x_coordinate = 14;
            y_coordinate = 1;
            break;
        case 12:
            x_coordinate = 14;
            y_coordinate = 3;
            break;
        case 13:
            x_coordinate = 14;
            y_coordinate = 5;
            break;
        case 21:
            x_coordinate = 18;
            y_coordinate = 1;
            break;
        case 22:
            x_coordinate = 18;
            y_coordinate = 3;
            break;
        case 23:
            x_coordinate = 18;
            y_coordinate = 5;
            break;
        case 31:
            x_coordinate = 24;
            y_coordinate = 1;
            break;
        case 32:
            x_coordinate = 24;
            y_coordinate = 3;
            break;
        case 33:
            x_coordinate = 24;
            y_coordinate = 5;
            break;
    }
    printf("\t\t| |\t\n\t------------------\n\t\t| |\t\n\t------------------\n\t\t| |\t");
    printf("\e[%d;%dH", x_coordinate, y_coordinate);

    switch(O_choice){
        case 11:
            x_coordinate = 14;
            y_coordinate = 1;
            break;
        case 12:
            x_coordinate = 14;
            y_coordinate = 3;
            break;
        case 13:
            x_coordinate = 14;
            y_coordinate = 5;
            break;
        case 21:
            x_coordinate = 18;
            y_coordinate = 1;
            break;
        case 22:
            x_coordinate = 18;
            y_coordinate = 3;
            break;
        case 23:
            x_coordinate = 18;
            y_coordinate = 5;
            break;
        case 31:
            x_coordinate = 24;
            y_coordinate = 1;
            break;
        case 32:
            x_coordinate = 24;
            y_coordinate = 3;
            break;
        case 33:
            x_coordinate = 24;
            y_coordinate = 5;
            break;
    }
    printf("\e[%d;%dH", x_coordinate, y_coordinate);

}


// void type_slowly(char temp[]){
//     int no_of_chr = sizeof(temp);
//     for(int i=0; i<=no_of_chr-1; i++)
//     {
//         printf("%c", temp[i]);
//         usleep(10000);
//     }
//     for(int i=0; i<=no_of_chr-1; i++)
//         temp[i] = ' ';
// }


void main(){
    char play_stop;
    printf("\n\tWelcome to Tic Tac Toe | Multiplayer | By Maaz\n\n\tPress Enter to Continue, e to Exit....");
    play_stop = getchar();
    if(play_stop != 'e')
        run_game();
}
