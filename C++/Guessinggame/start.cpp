#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
   int secretkey = 1007;
   int secret =  rand()% 20 + 6;
   int guess;
   int count = 0;
   int limit = 10;
   bool outofguess = false;
   
   while (secret != guess && !outofguess && guess != secretkey)
   {
      if (count < limit)
      {

         if (guess < secret){
             cout << " Smaller: ";
         } else {
             cout << " Larger: ";
         }cout << "Enter a Guess: ";
         cin >> guess;
         count++;
      } else
      
      {
         outofguess = true;
      }
   }
   if (outofguess)
   {
      cout << "\n\tYou Loose !!!! : " << secret << " was the Number\n\n";
   
   }else if (guess == secretkey){
      cout << "\n\tYou found backdoor key. The number was " << secret << "\n\n";
   }
   else 
   {
      cout << "\n\tYou guess right!!!!  :" << secret << " was the Number\n\n";
   }

system("PAUSE");  
}