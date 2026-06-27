// Write a program to Create employee
// management system.


#include <iostream>
using namespace std;

class Employee{
public:
  int id;
  char name[50];
  float salary;
  
  void input(){
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Salary: ";
    cin >> salary;
  }

  void display(){
    cout << "\nEmployee Details\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main(){
  Employee e;
  e.input();
  e.display();
  
  return 0;
}