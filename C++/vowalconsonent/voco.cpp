#include <iostream>
using namespace std;
int main ()
{
    char n;
    cout << "Enter an Alphabet (only 1): ";
    cin >> n;

    if (n == 'a' ||n == 'e'|| n == 'i' || n == 'o' || n == 'u')
    {
        cout << "\n\n\n\nYou have entered a vowal\n\n\n\n";
    }else {
    cout << "\n\n\n\nYou have entered a consonant\n\n\n\n";
    }
    system ("PAUSE");
    return 0;
}
