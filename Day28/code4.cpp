// Write a program to Create contact
// management system.


#include <iostream>
using namespace std;

class Contact
{
public:
  string name;
  string phone;

  void input(){
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone Number: ";
    cin >> phone;
  }

  void display(){
    cout << "\nName: " << name;
    cout << "\nPhone Number: " << phone;
  }
};

int main(){
  Contact c;
  c.input();
  c.display();

  return 0;
}