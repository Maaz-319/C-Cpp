#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


void run_again();


void run(){
int number, count;
    system("cls");
    printf("\n\tEnter a number: ");
    if((scanf("%d", &number)) != 1)
	run();
    for (count = 0; count <= 10; count++)
    {
	printf("\n\t%d x %d = %d",number, count, number * count);
    }
    run_again();
}


void run_again(){
	char user_choice;
	printf("\n\n\tPress Key:\n\t\ta) Run Again\n\t\tb) Exit");
	user_choice = getch();
	if(user_choice == 'a')
		run();
}


int main()
{
    run();
    return 0;
}
