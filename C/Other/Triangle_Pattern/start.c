#include<stdio.h>
#include<stdlib.h>


void run(){
    int length, n, j;
    char character;
    system("cls");
    length_of_triangle:
        printf("\n\tEnter length of Triangle > ");
        scanf(" %d", &length);
    if(!(length > 0))
        goto length_of_triangle;
    printf("\n\tEnter Display Character > ");
    scanf(" %c", &character);

    system("cls");
    printf("\t");
    for(n=1; n<=length; n++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%c", character);
        }
        printf("\n\t");
    }
    run_again();
}


int run_again(){
    int user_choice;
    printf("\n\n\tChoose:\n\t1) Run Again\n\t2) Exit\t> ");
    scanf(" %d", &user_choice);
    if(user_choice == 1)
        run();
    else
        return(0);
    return(0);
}


void main(){
    system("cls");
    printf("\n\t\t\t<------ Welcome to Triangle Creator ------>\n");
    printf("---------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\tPress Enter to Start...");
    getch();
    run();
}
