// Write a program to Check whether a number is
// palindrome.

#include <iostream>
using namespace std;

int main() {
  int num, originalNumber, reverse = 0, digit;

  cout << "Enter a number: ";
  cin >> num;

  originalNumber = num;

  while (num != 0) {
    digit = num % 10;
    reverse = reverse * 10 + digit; 
    num = num / 10;   
  }

  if (originalNumber == reverse)
    cout << originalNumber << " is a Palindrome number";
  else{
    cout << originalNumber << " is not a Palindrome number";
  }

    return 0;
}