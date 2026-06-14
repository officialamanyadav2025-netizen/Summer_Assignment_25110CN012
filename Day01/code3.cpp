// Write a program to find factorial of a number

#include<iostream>
using namespace std;

int main() {

  int n;
  int factorial = 1;

  cout << "ENTER THE NUMBER : ";
  cin >> n;
  for(int i = 1; i <= n; i++) {
    factorial = factorial * i;
  }

  cout << "FACTORIAL OF " << n << " IS : " << factorial;

  return 0;
}