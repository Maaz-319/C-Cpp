#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main ()
{
 srand(time(NULL));
 cout << "A four digit password generator by Maaz\n\n\n\n" ;
    cout << rand()% 20000 + 6 << " is your Password\n\n\n" ;
    system("PAUSE");
    return 0;
}
