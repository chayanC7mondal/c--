#include <iostream>
using namespace std;
int main() {
   // char name[80];
   // cout<<"Enter name:";
   // cin.getline(name,20);
   // cout<<"Entered name is :"<<name;
   
   char name[50];
   int len = 0;
   cout << "Enter the string: ";
   cin.getline(name,20);
   while (name[len] !='\0')
   len++;
   cout << "Length of the string is :"<< len
}