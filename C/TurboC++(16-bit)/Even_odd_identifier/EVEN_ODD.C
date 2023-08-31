#include<stdio.h>
#include<conio.h>
void identify(){
	int n;
	clrscr();
	printf("\n\tEnter an Integer(1-9): ");
	scanf(" %d", &n);
	if(n % 2 == 0 && n != 0)
		printf("\n\tEven");
	else if(n % 2 != 0)
		printf("\n\tOdd");
	else
		printf("\n\tInvalid Input!");
	getch();
	run_again();
}
int run_again(){
	char user_choice;
	printf("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a'){
		identify();
	}else if(user_choice == 'b'){
		return(0);
	}else{
		run_again();
	}
	return(0);
}
void main(){
	clrscr();
	printf("\n\tWelcome to Even Odd Identifier.\n\tPress Enter to start..");
	identify();
}