// Code by ```Maaz Bin Asif``` Email = ```maazbinaasif@gmail.com```.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void sum()
{
    float num1, num2;
    system("cls");
    printf("\n\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("\n%.1f + %.1f = %.1f.\n\n", num1, num2, num1+num2);
    getch();
}


void subtract()
{
    float num1, num2;
    system("cls");
    printf("\n\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("\n %.1f - %.1f = %.1f.", num1, num2, num1-num2);
    getch();
}


void multiply()
{
    float num1, num2;
    system("cls");
        printf("\n\nEnter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("\n%.1f x %.1f = %.1f.", num1, num2, num1*num2);
        getch();
}


void divide()
{
    float num1, num2;
    system("cls");
        printf("\n\nEnter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("\n%.1f / %.1f = %.1f.", num1, num2, num1/num2);
        getch();
}


void modulus()
{
    int amod, bmod, m;
    system("cls");
        printf("\n\nEnter first number: ");
        scanf("%i", &amod);
        printf("Enter second number: ");
        scanf("%i", &bmod);
        m = amod % bmod;
        printf("\n %i mod %i = %i.", amod, bmod,m);
        getch();
}


void main()
{
    int user_choice;

    printf("\n********************************************************************************");
    printf("\n\tEnter choice:\n\n\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Divide\n\t5. Modulus\n\n********************************************************************************\nChoice: ");
    scanf("%i", &user_choice);
    if (user_choice == 1)
    {
        sum();
    }else if (user_choice == 2)
    {
        subtract();
    }else if(user_choice == 3)
    {
        multiply();
         
    }else if(user_choice == 4)
	{
        divide();
         
    }else if (user_choice == 5)
    {
        modulus();         
    }
    else
        printf("Not a valid choice!!!!  :(");
        getch();
        

}
