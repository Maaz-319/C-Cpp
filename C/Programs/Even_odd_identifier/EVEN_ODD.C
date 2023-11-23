#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void identify(void);
int run_again(void);


int main(){
	system("cls");
	printf("\n\tWelcome to Even Odd Identifier.\n\tPress Enter to start..");
	getch();
	identify();
	return 0;
}


void identify(){
	int n;
	system("cls");
	printf("\n\tEnter an Integer: ");
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
		return 0;
	}else{
		run_again();
	}
	return 0;
}