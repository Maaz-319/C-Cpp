#include <iostream>
using namespace std;

int main()
{
    int n, f;

    cout << "\n\nWelcome to Maaz Factors display\n\nEnter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;  
    for(f = 1; f <= n; ++f)
    {
        if(n % f == 0)
            cout << f << endl;
    }
    system("Pause");

    return 0;
}