#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void handle_flow();


int run_again()
{
	char user_ch;
	printf("\n\n\tChoose:\n\ta) Run Again\n\tb) Exit\n\t> ");
	
	if((scanf(" %c", &user_ch) != 1))
        run_again();
	
	switch(user_ch){
	case 'a':
		handle_flow();
	case 'b':
		return(0);
	default:
		printf("\n\tInvalid Input!!\n\n");
		run_again();}
    
    return(0);
}


void C_to_F(float x)
{
	printf("\n\t%.2f Celsius --> %.2f Fahrenheit", x, (9.0/5.0*x+32));
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void F_to_C(float x)
{
	printf("\n\t%.2f Fahrenheit --> %.2f Celsius", x, (5.0/9.0*(x-32)));
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void C_to_K(float x)
{
	printf("\n\t%.2f Celsius --> %.2f Kelvin", x, x+273.15);
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void K_to_C(float x)
{
	printf("\n\t%.2f Kelvin --> %.2f Celsius", x, x-273.15);
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void F_to_K(float x)
{
	printf("\n\t%.2f Fahrenheit --> %.2f Kelvin", x, (5.0/9.0*(x-32.0))+273.15);
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void K_to_F(float x)
{
	printf("\n\t%.2f Kelvin --> %.2f Fahrenheit", x, 9.0/5.0*(x-273.15)+32.0);
	printf("\n\n\tPress Enter...");
	getch();
	
	run_again();
}


void handle_flow()
{
	char user_choice;
	float temperature;
	
	system("cls");
	printf("\n\tChoose:\n\t\ta) Celsius to Fahreheit\n\t\tb) Fahrenheit to Celsius\n\t\tc) Celsius to Kelvin\n\t\td) Kelvin to Celsius\n\t\te) Fahreheit to Kelvin\n\t\tf) Kelvin to Fahreheit\n\t> ");
	
	if((scanf(" %c", &user_choice)) != 1)
        handle_flow();
	
	printf("\n\tEnter Temperature: ");
	if((scanf(" %f", &temperature)) != 1)
		handle_flow();
	
	switch (user_choice)
	{
		case 'a':
			C_to_F(temperature);
			break;
		case 'b':
			F_to_C(temperature);
		case 'c':
			C_to_K(temperature);
		case 'd':
			K_to_C(temperature);
		case 'e':
			F_to_K(temperature);
		case 'f':
			K_to_F(temperature);
			K_to_F(temperature);
		default:
			handle_flow();
	}
}


int main()
{
	printf("\n\tWelcome to Temperature Convertor | By Maaz\n\n\tPress Enter to start...");
	getch();
	handle_flow();
	
	return(0);
}
