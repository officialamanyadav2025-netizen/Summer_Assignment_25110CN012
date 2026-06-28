// Write a program to Create library
// management system.


#include <iostream>
using namespace std;

class Library
{
public:
  int id;
  string name;

  void input(){
    cout << "Enter Book ID: ";
    cin >> id;
    cout << "Enter Book Name: ";
    cin >> name;
  }

  void display(){
    cout << "\nBook ID: " << id;
    cout << "\nBook Name: " << name;
  }
};

int main(){
  Library b;
  b.input();
  b.display();

  return 0;
}