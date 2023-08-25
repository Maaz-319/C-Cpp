#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%i", &a);
    printf("Enter second number: ");
    scanf("%i", &b);
    if(b % a == 0)
    {
        printf("\n\t%i is a factor of %i.", a, b);
    }
    else
        printf("\n\t%i is not a factor of %i.\n\n", a, b);
    getch();
}