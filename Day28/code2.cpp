// Write a program to Create bank account
// system.


#include <iostream>
using namespace std;

class Bank
{
public:
  string name;
  int accNo;
  float balance;

  void input(){
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Balance: ";
    cin >> balance;
  }

  void display(){
    cout << "\nName: " << name;
    cout << "\nAccount No: " << accNo;
    cout << "\nBalance: " << balance;
  }
};

int main(){
  Bank b;
  b.input();
  b.display();

  return 0;
}