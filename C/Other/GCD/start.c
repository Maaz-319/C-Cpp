// Code by ```Maaz Bin Asif```.
#include<stdio.h>
#include<conio.h>

void main()
{
    int num_1, num_2, i, a;
    printf("\n\tEnter first number: ");
    scanf("%d", &num_1);
    printf("\n\tEnter second number: ");
    scanf("%d", &num_2);
    i = 2;
    while(i <= num_1 && i <= num_2)
    {
        //r_1 = num_1 / i
        //r_2 = num_2 / i
        if (num_1 % i == 0 && num_2 % i == 0)
            a = i;
            i++;
    }
    printf("\n\n\tGCD of %d and %d = %d \n\n\n",num_1, num_2, a);
    getch();
}