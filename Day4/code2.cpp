// Write a program to Find nth Fibonacci term.

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int a = 0, b = 1;
  int temp;
  if(n == 1)
    cout << "Nth Fibonacci term = 0";
  else if(n == 2)
    cout << "Nth Fibonacci term = 1";
  else {
    for(int i = 3; i <= n; i++) {
      temp = a + b;
      a = b;
      b = temp;
    }

    cout << "Nth Fibonacci term = " << b;
  }

  return 0;
}