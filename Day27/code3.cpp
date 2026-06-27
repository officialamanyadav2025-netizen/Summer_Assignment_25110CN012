// Write a program to Create salary management
// system.


#include <iostream>
using namespace std;

class Salary{
public:
  char name[50];
  float basic, hra, da, total;

  void input(){
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> basic;
  }

  void calculate(){
    hra = basic * 0.20;
    da = basic * 0.10;
    total = basic + hra + da;
  }
  
  void display(){
    cout << "\nSalary Details\n";
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "Total Salary: " << total << endl;
  }
};

int main(){
  Salary s;
  s.input();
  s.calculate();
  s.display();
  
  return 0;
}