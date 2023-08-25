// Code by ```Maaz Bin Asif```.
#include<stdio.h>
#include<conio.h>

void main()
{
    int user_num, i = 2;
    printf("\n\tEnter a number: ");
    scanf("%d", &user_num);
    printf("\n\nFactors: 1");
    while(i <= user_num)
    {
        if(user_num % i == 0)
        {
            printf(", %d", i);
        }
        i++;
    }
    printf(".");
    getch();
}