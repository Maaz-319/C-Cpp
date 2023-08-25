// Code by: Maaz Bin Asif
#include<stdio.h>
#include<conio.h>
void main()
{
	int hyp, per, bas;
    printf("Enter length of [hypotenuse]: ");
    scanf("%i", &hyp);
    printf("Enter length of [perpendicular]: ");
    scanf("%i", &per);
    printf("Enter length of [base]: ");
    scanf("%i", &bas);
    hyp = hyp * hyp;
    per = per * per;
    bas = bas * bas;
    if (hyp == per + bas)
        printf("\n\tRight angled Triangle!\n\n");
    else
        printf("\n\tNot a Right angled Triangle!\n\n");
    getch();
}