#include <iostream>
using namespace std;
int main()
{
    double Fahrenheit;
    cout << "\n\nEnter Temperature in Fahrenheit\n\n";
    cin >> Fahrenheit;
    cout << "\n\n " << (Fahrenheit  - 32) * 5/9;
    system("PAUSE");
    return 0;
}