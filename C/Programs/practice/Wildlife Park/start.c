#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<typeslow.h>

// Function Signatures
void display_info(char, int);
void take_inputs();
void calculate_price(int, int, int, int, int, int);
void display_results(int, int, int, float, int);
void run_again();

// Global Variables
char *packages[5] = {"One Adult", "One Senior", "One Child(2 kids per Adult)", "family ticket", "Six or More people"};
char *extra_attractions[4] = {"Lion Feeding", "Penguin Feeding", "Evening BBQ", "None"};
int prices_one_day[5] = {20, 16, 12, 60, 15};
float prices_two_days[5] = {30, 24, 18, 90, 22.50};
float extra_attractions_numbers[4] = {2.50, 2, 5, 0};

int main(){
	system("cls");
	print_slowly("\n\t   ------------------------------------------------------");
	print_slowly("\n\t\tWelcome to the WildLife Park Ticket Portal");
	print_slowly("\n\t   ------------------------------------------------------\n\n");
	printf("\n\nPress any key to Continue...");
	getch();
	display_info('0', 0);
	return 0;
}


void display_info(char temp, int package_validity)
{
	if(temp == 'a')
	{
		system("cls");
		print_slowly("\n\t==============================");
		print_slowly("\n\t\t< Extras >");
		print_slowly("\n\t==============================");
		print_slowly("\n\n\t- Type -\t\t\t\t- Cost Per Person($) -");
		print_slowly("\n\t--------------------------------------------------------------------");
		printf("\n\n\t1) Lion Feeding\t\t\t\t\t%.1f\n\t2) Penguin Feeding\t\t\t\t%.1f", extra_attractions_numbers[0], extra_attractions_numbers[1]);
		if(package_validity==2)
			printf("\n\t3) Evening BBQ(2 Days Package Only)\t\t%.1f", extra_attractions_numbers[2]);
		printf("\n\t4) None\t\t\t\t\t\t%.1f", extra_attractions_numbers[30]);
		print_slowly("\n\t--------------------------------------------------------------------\n\n");
	}
	else
	{
		system("cls");
		// printf("\n\t< Available Days >");
		// printf("\n\t\t-> ");
		print_slowly("\n\t\t\t< Ticket Pricing >\n\t-Type-\t\t\t\t\t\t- One Day($) -\t- Two Days($) -");
		print_slowly("\n\t==============================================================================");
		printf("\n\n\t1) One Adult\t\t\t\t\t%d\t\t%.1f\n\t2) One Senior\t\t\t\t\t%d\t\t%.1f\n\t3) One Child(An Adult can bring 2 Kids)\t\t%d\t\t%.1f\n\t4) Family Ticket(2 Adult, 3 Kids)\t\t%d\t\t%.1f\n\t5) Six or More People(Per Person)\t\t%d\t\t%.1f\n\n", prices_one_day[0], prices_two_days[0], prices_one_day[1], prices_two_days[1], prices_one_day[2], prices_two_days[2], prices_one_day[3], prices_two_days[3], prices_one_day[4], prices_two_days[4], prices_one_day[5], prices_two_days[5]);
		print_slowly("\n\t==============================================================================");
		take_inputs();		
	}
}


void take_inputs()
{
	int package_validity, package_type, extras, number_of_tickets=1, number_of_tickets_for_extras=1, number_of_persons=1;
	
	do{
		print_slowly("\n\tChoose Ticket Type(1-5): ");
		scanf("%d", &package_type);
	}while(package_type<1 || package_type>5);
	if(package_type == 5)
	{
		print_slowly("\n\tEnter Number Of Persons: ");
		scanf(" %d", &number_of_persons);
	}

	if(package_type!=5)
	{
		do{
			print_slowly("\n\tEnter number of Tickets you want to Buy for this Package: ");
			scanf(" %d", &number_of_tickets);
		}while(number_of_tickets<0);
	}
	
	do{
		print_slowly("\n\tChoose Validity(1 or 2 day): ");
		scanf(" %d", &package_validity);
	}while(package_validity<1 || package_validity>2);
	display_info('a', package_validity);
	
	do{
		print_slowly("\n\tChoose Extras(1-4): ");
		scanf("%d", &extras);
	}while(extras<1 || extras>4);
	if(package_validity == 1 && extras==3)
	{
			do{
			print_slowly("\n\tChoose Extras(1-4): ");
			scanf("%d", &extras);
		}while((extras<1 || extras>4) && extras==3);
	}
	
	if(number_of_tickets>1 && extras!=4)
	{
		do{
			print_slowly("\n\tEnter Number of Tickets on Which You want Extra Attractions: ");
			scanf(" %d", &number_of_tickets_for_extras);
		}while(number_of_tickets_for_extras>number_of_tickets || number_of_tickets_for_extras<0);
	}
	// if(package_type!=1 && package_type!=2 && extras!=4)
	// {
	// 	printf("\n\tEnter Total Number of Persons: ");
	// 	scanf(" %d", &number_of_persons);
	// }
	calculate_price(package_validity, package_type, extras, number_of_tickets, number_of_tickets_for_extras, number_of_persons);
}


void calculate_price(int package_time, int package_kind, int extra_things, int number_of_tickets, int number_of_tickets_for_extras, int number_of_persons)
{
	float total_cost=0;
	char user_choice;
	
	if(package_time == 1)
		total_cost = (prices_one_day[package_kind-1]*number_of_tickets)*number_of_persons + extra_attractions_numbers[extra_things-1]*number_of_tickets_for_extras;
	else
		total_cost = (prices_two_days[package_kind-1]*number_of_tickets)*number_of_persons + extra_attractions_numbers[extra_things-1]*number_of_tickets_for_extras;

	system("cls");
	print_slowly("\n\n\t< Details >");
	print_slowly("\n\n\tPackage Name\t\t\t\tNumber of Tickets\t\tExtra Attractions");
	print_slowly("\n----------------------------------------------------------------------------------------------");
	printf("\n\t%s\t\t\t        %d\t\t\t  %s", packages[package_kind-1], number_of_tickets, extra_attractions[extra_things-1]);
	print_slowly("\n\nChoose: \n\t\t1 -> Confirm\n\t\t2 -> Cancel\n\t\t3 -> Exit\n\t>");
	do{
		scanf(" %c", &user_choice);
	}while(user_choice<'1' || user_choice>'3');
	if(user_choice == '1')
		display_results(package_time, package_kind, extra_things, total_cost, number_of_tickets);
	else if(user_choice == '2')
		display_info('0', 0);
}


void display_results(int package_time, int package_kind, int extra_things, float total_cost, int number_of_tickets)
{
	int ticket_number;
	srand ( time(NULL) );
	ticket_number = rand();
	system("cls");
	print_slowly("\n\t------------------------------------------");
	print_slowly("\n\t\tYour Ticket Has been Confirmed");
	print_slowly("\n\t------------------------------------------");
	printf("\n\nPress Enter to Continue...");
	getch();
	system("cls");
	print_slowly("\n\t==================================");
	printf("\n\t\tTICKET No. %d", ticket_number);
	print_slowly("\n\t==================================\n");
	printf("\n\tPackage Type:      \t%s\t %d Day(s) Ticket!", packages[package_kind-1], package_time);
	printf("\n\tNumber of Tickets: \t%d", number_of_tickets);
	if(extra_things!=4)
		printf("\n\tExtra Attractions:\t%s", extra_attractions[extra_things-1]);
	print_slowly("\n\t------------------------------------------------------");
	printf("\n\n\tTotal Cost:        \t$%.1f", total_cost);
	getch();
	run_again();
}


void run_again()
{
	char user_choice;
	print_slowly("\n\n\n\tChoose:\n\t\ta) Run Again\n\t\tb) Exit\n>");
	do{
		scanf(" %c", &user_choice);
	}while(user_choice < 'a' || user_choice > 'b');
	if(user_choice == 'a')
		display_info(0, '0');
}