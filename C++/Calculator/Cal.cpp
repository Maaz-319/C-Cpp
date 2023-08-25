#include <iostream>

using namespace std;

int SayBye()
{
    cout << "\n\n\n\n\n\nMade Bye Maaz\n Please visit website 'tiny.cc/maaz'\n\n\n\n\n\n ";
    return 0;
}

int SayHi()
{

    cout << "Welcome to Maaz simple Calculator\n\n\n\n" << endl;
return 0;
}
int getMax()

{
    double n;
    double m;
    char o;
    cout << "Enter 1st Number: ";
    cin >> n;
    cout << "Enter 2nd Number: ";
    cin >> m;
    cout << "Choose an operation: ( + - / *): "<< endl;
    cin >> o;
    if (o == '+') {
    cout << n + m;
   } else if (o == '-')
    {
        cout << n -m;
    } else if (o == '/')
    {
        cout << n / m;
    } else if (o == '*')
    {
        cout << n * m;
    } else {
    cout << "operation not correct";}
return 0;
}
int main()
{
    SayHi();
    getMax();
    SayBye();
    system("Pause");
    return 0;
}
