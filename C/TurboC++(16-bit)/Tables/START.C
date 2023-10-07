#include<stdio.h>
#include<conio.h>


void run_again();


void run(){
int number, count;
    clrscr();
    printf("\n\tEnter a number: ");
    if((scanf("%d", &number)) != 1)
	run();
    for (count = 0; count <= 10; count++)
    {
	printf("\n\t%d x %d = %d",number, count, number * count);
    }
    run_again();}


void run_again(){
	char user_choice;
	printf("\n\nPress Key:\na) Run Again\nb) Exit");
	user_choice = getch();
	if(user_choice == 'a')
		run();
}


void main()
{
    run();
}
