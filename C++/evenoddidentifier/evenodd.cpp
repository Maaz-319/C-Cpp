#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    if (a % 2 == 0 )
    {
        cout << a << " is even.\n\n";
    }else {
    cout << a << " is odd.\n\n";
    }
    system ("PAUSE");
}
