#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "\n Made by Maaz\n\n";
    cout << "\nEnter your Year: ";
    cin >> y;
    if (y % 4 == 0){
    cout << y <<" Is a Leap Year\n";
    }else {
        cout << y <<" Is Not a Leap Year\n";
    }
    system ("PAUSE");
return 0;
}