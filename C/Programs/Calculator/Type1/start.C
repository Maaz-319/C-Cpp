#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int run_again(void);
void calculate(void);

int main(){
	system("cls");
	printf("\n\tWelcome to Calculator | By Maaz\n\tPress Enter to Start...");
	getch();
	calculate();
	return 0;
}


void calculate(){
	float num_1, num_2;
	char Operator;
	system("cls");
	printf("\n\tEnter First Number: ");
	scanf(" %f", &num_1);
	printf("\n\tChoose Operator(+-/*): ");
	scanf(" %c", &Operator);
	printf("\n\tEnter Second Number: ");
	scanf(" %f", &num_2);
	if(Operator == '+'){
		printf("\n\tAnswer: %.2f", num_1+num_2);
	}else if(Operator == '-'){
		printf("\n\tAnswer: %.2f", num_1-num_2);
	}else if(Operator == '/'){
		if(num_2 == 0)
			printf("\n\tCan't Divide by Zero.");
			getch();
			calculate();
		printf("\n\tAnswer: %.2f", num_1/num_2);
	}else if(Operator == '*'){
		printf("\n\tAnswer: %.2f", num_1*num_2);
	}else{
		printf("\n\tInvalid Input");
	}
	getch();
	run_again();
}


int run_again(){
	char user_choice;
	printf("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a'){
		calculate();
	}else if(user_choice == 'b'){
		return 0;
	}else{
		run_again();
	}
	return 0;
}