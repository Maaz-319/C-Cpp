#include<stdio.h>
#include<conio.h>
void calculate(){
	float num_1, num_2;
	char operator;
	clrscr();
	printf("\n\tEnter First Number: ");
	scanf(" %f", &num_1);
	printf("\n\tChoose Operator(+-/*): ");
	scanf(" %c", &operator);
	printf("\n\tEnter Second Number: ");
	scanf(" %f", &num_2);
	if(operator == '+'){
		printf("\n\tAnswer: %.2f", num_1+num_2);
	}else if(operator == '-'){
		printf("\n\tAnswer: %.2f", num_1-num_2);
	}else if(operator == '/'){
		printf("\n\tAnswer: %.2f", num_1/num_2);
	}else if(operator == '*'){
		printf("\n\tAnswer: %.2f", num_1*num_2);
	}else{
		printf("\n\tInvalid Input");
	}
	getch();
	run_again();
}
run_again(){
	char user_choice;
	printf("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a'){
		calculate();
	}else if(user_choice == 'b'){
		return(0);
	}else{
		run_again();
	}
	return(0);
}
main(){
	clrscr();
	printf("\n\tWelcome to Calculator | By Maaz\n\tPress Enter to Start...");
	getch();
	calculate();
	return(0);
}