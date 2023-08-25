#include <iostream>
using namespace std;
int main()
{
    char z;
    cout << "Enter a for large and b for small: ";
    cin >> z;
    if (z == 'a')
    {
         double n;
    double m;
    double o;
   string e =  "Numbers are equal";
    cout << "Enter First Number: ";
    cin >> n;
    cout << "Enter Second Number: ";
    cin >> m;
    cout << "Enter Third Number: ";
    cin >> o;
    if (n > m && n > o)
    {
        cout << n<< " is The Largest";
    } else if (n == m && n == o)
    {
        cout << e;
    }  else if (m > n && m > o)
    {

        cout << m<< " is the Largest";
    } else

    {
        cout << o <<" is the Largest. \n";
    }
    system("PAUSE");
    }else if (z =='b')
    {
         double a;
    double b;
    double c;
    string d = " is the smallest number\n\n\n";
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;
    if (a < b & a < c){cout << a << d << endl;
     
    }else if (b < a & b < c){
        cout << b << d << endl;
    }else {
        cout << c << d << endl;
    }
    system("PAUSE");
    }else {
        cout <<"No Such Function Found";
    }
    return 0;
}