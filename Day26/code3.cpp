// Write a program to Create ATM simulation.

#include <iostream>
using namespace std;

int main() {
  int choice;
  float balance = 5000, amount;

  cout << "1.Check Balance\n2.Deposit\n3.Withdraw\n";
  cin >> choice;

  if (choice == 1){
    cout << "Balance = " << balance;
  }
  
  else if (choice == 2) {
    cout << "Enter amount: ";
    cin >> amount;
    balance = balance + amount;
    cout << "Balance = " << balance;
  }

  else if (choice == 3) {
    cout << "Enter amount: ";
    cin >> amount;

    if(amount <= balance){
      balance = balance - amount;
      cout << "Balance = " << balance;
    }
    else{
      cout << "Insufficient Balance";
    }
  }

  else
    cout << "Invalid Choice";

  return 0;
}