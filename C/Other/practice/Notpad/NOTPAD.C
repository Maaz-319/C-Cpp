#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void run(void);
void save_file(FILE *file);
void exit_program(void);


int main()
{
	printf("\n\tWelcome to Notpad | By Maaz");
	printf("\n\tPress any key to continue...");
	getch();
	system("cls");
	printf("\n\t\t\t\t\t\t|USER MANUAL|");
	printf("\n\n\t> To save the File, Press [Esc] Key.");
	printf("\n\t> After Pressing [Esc], the file will be saved and program will Exit.");
	printf("\n\n\tPress any Key to Start...");

	getch();
	run();

	return 0;
}


void run()
{
	FILE *file;
	char user_input;

	system("cls");
	printf("\n\t\t\t\t\t\t-:TYPE HERE:-\n\n\n\n");

	file = fopen("Maaz_NP.txt", "w");

	while(1)
	{
		user_input=getch();

		if ((int)user_input == 27)
		{
			user_input = '\n';
			break;
		}
		if ((int)user_input == 13)
			printf("\n");

		printf("%c", user_input);
		putc(user_input, file);
	}

	save_file(file);
	exit_program();
}


void save_file(FILE* file_var)
{
	fclose(file_var);

	printf("\n\n\tYour file was saved Successfully...\n\tPress any Key to continue...");
	getchar();
}


void exit_program()
{
	exit(0);
}