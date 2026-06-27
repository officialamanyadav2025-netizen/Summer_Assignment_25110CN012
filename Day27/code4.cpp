// Write a program to Create marksheet
// generation system.


#include <iostream>
using namespace std;

class Marksheet {
public:
  char name[50];
  int m1, m2, m3, total;
  float per;

  void input(){
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;
  }

  void calculate(){
    total = m1 + m2 + m3;
    per = total / 3.0;
  }

  void display(){
    cout << "\nMarksheet\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << "%" << endl;

    if (per >= 40){
      cout << "Result: Pass";
    }
    else{
      cout << "Result: Fail";
    }   
  }
};

int main(){
  Marksheet m;
  m.input();
  m.calculate();
  m.display();
  
  return 0;
}