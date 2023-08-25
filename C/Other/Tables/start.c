#include<stdio.h>
#include<conio.h>
void main()
{
    float number, count;
    printf("\n\tEnter a number: ");
    scanf("%f", &number);
    for (count = 0; count <= 10; count++)
    {
        printf("\n\t%.0f x %.0f = %.0f\n\n",number, count, number * count);
    }
    getch();

}