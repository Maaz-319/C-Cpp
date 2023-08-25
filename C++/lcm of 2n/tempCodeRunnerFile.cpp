#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "Enter First Number: ";
	cin >> n1;
	cout << "Enter second Number: ";
	cin >> n2;
	int min;
if (n1 > n2){
	min = n1;
}else {
	min = n2;
}
 do
    {
        if (min % n1 == 0 && min % n2 == 0)
        {
            cout << "LCM = " << min << "     (Made By Maaz)";
            break;
        }
        else
            ++min;
    }while (true);
	return 0; 


}