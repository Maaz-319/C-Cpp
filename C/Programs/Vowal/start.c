// Code by ```Maaz Bin Asif```.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
   char user_letter;
   printf("Enter a letter: ");
   scanf("%c", &user_letter);
   if (user_letter >= '0' && user_letter <= '9' )
   {
       printf("Alphabelts Only");
       getch();
       exit(0);
   }
   switch (user_letter)
   {
    case 'a':
        printf("\nVowal\n");
        break;
    case 'e':
        printf("\nVowal\n");
        break;
    case 'i':
        printf("\nVowal\n");
        break;
    case 'o':
        printf("\nVowal\n");
        break;
    case 'u':
        printf("\nVowal\n");
        break;
    case 'A':
        printf("\nVowal\n");
        break;
    case 'E':
        printf("\nVowal\n");
        break;
    case 'I':
        printf("\nVowal\n");
        break;
    case 'O':
        printf("\nVowal\n");
        break;
    case 'U':
        printf("\nVowal\n");
        break;
    
   
    default:
        printf("\n\nConsonant\n\n");
        break;
    
   }
getch();
}