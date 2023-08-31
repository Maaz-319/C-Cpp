#include<stdio.h>
#include<conio.h>
void calculate(){
	float height, weight, bmi;
	clrscr();
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
run_again(){
	char user_choice;
	printf("\n\n\tChoose:\n\ta) Run again\n\tb) Exit\n\t\tChoice: ");
	scanf(" %c", &user_choice);
	if(user_choice == 'a'){
		clrscr();
		calculate();}
	else if(user_choice == 'b'){
		return(0);}
	else
		run_again();
	return(0);
}
void main(){
	printf("\n\tWelcome to BMI Calculator");
	printf("\n\tEnter to start...");
	calculate();
}



