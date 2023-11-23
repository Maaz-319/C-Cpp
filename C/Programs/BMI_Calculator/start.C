#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int run_again(void);
void calculate(void);


int main(){
	printf("\n\tWelcome to BMI Calculator");
	printf("\n\tEnter to start...");
	calculate();
	return 0;
}


void calculate(){
	float height, weight, bmi;
	system("cls");
	printf("\n\tEnter Height(feet): ");
	scanf(" %f", &height);
	height *= 0.304;
	printf("\n\tEnter Weight(kg): ");
	scanf(" %f", &weight);
	bmi = weight / (height * height);
	printf("\n\tBMI: %.1f", bmi);
	if(bmi > 24.9)
		printf("\n\tOverWeight :o");
	else if(bmi < 18.5)
		printf("4\n\tUnderWeight :(");
	else
		printf("\n\tNormal BMI. :)");

	getch();
	run_again();
}


int run_again(){
	char user_choice;
	printf("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a'){
		system("cls");
		calculate();}
	else if(user_choice == 'b'){
		return 0;}
	else
		run_again();
	return 0;
}