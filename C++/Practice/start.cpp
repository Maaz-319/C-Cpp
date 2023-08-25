#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream Maaz;
    Maaz.open("Maaz.txt", ios::out);
    if(!Maaz){
        cout << "Test Failed ";
    }else if (Maaz)
    {
        cout << "Test Successful";
    }
    Maaz << "File Handling Test #13\nWriting to a txt file";
    return 0;
/*fstream Maaz; 
Maaz.open("new_file_write.txt",ios::out);  
if(!Maaz) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
Maaz<<"Learning File handling";    //Writing to file
Maaz.close(); 
}   
return 0*/;
}