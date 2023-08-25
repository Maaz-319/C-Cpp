// Code by: Maaz Bin Asif
#include<stdio.h>
#include<conio.h>
void main()
{
    int user_input, s;
    printf("Enter a number: ");
    scanf("%i", &user_input);
    s = user_input % 10;
    if(s == 5)
        {
            if(user_input % 3 == 0)
                {
                    printf("\n\tYES\n\n");
                }
        }
}