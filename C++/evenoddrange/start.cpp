#include <iostream>
using namespace std;
int main()
{
 int n1, n2;
cout << "Please Enter Your Smallest Number: " ;
cin >> n1;
cout << "Please Enter Your Largest Number: "  ;
cin >> n2;
while( n1 < n2 ){
 
 if( n1 % 2 == 0)
 {
 cout << "Even.No. = " << n1 << "   :::Made By Maaz:::"<< endl;
 
 }
 n1 = n1+1;
}
system("PAUSE");
}