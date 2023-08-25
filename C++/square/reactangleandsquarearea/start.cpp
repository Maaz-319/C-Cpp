#include <iostream>
using namespace std;
int main()
{  
    string a;
cout << "Enter z to find area of square and y for area of rectangle: ";
cin >> a;
if (a == "z")
 { double width;
   double length;
  cout <<"Enter length of square: ";
  cin >> length;
  cout <<"Enter width of square: ";
  cin >> width;
  cout << width * length << "   (Made by Maaz )"<<endl;
  system("PAUSE");
  return 0;
}else if (a == "y")
 {
    double width;
   double length;
  cout <<"Enter length of rectangle: ";
  cin >> length;
  cout <<"Enter width of rectangle: ";
  cin >> width;
  cout << width * length <<"   (Made by Maaz)"<< endl;
  system("PAUSE");
  return 0;
 } else 
 {cout << "No Function Could be found for"<< a;
 }
 return 0;
}
