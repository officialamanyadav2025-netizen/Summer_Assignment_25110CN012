// Write a program to Create student record
// management system.


#include <iostream>
using namespace std;

class Student{
public:
  int roll;
  char name[50];
  float marks;

  void input(){
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Marks: ";
    cin >> marks;
  }

  void display(){
    cout << "\nStudent Record\n";
    cout << "Roll No: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
  }
};

int main(){
  Student s;
  s.input();
  s.display();
  
  return 0;
}