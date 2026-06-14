// Write a program to Find x^n without pow().

#include <iostream>
using namespace std;

int main() {
  int x, n, result = 1;
  cout << "Enter base and exponent: ";
  cin >> x >> n;
  for (int i = 1; i <= n; i++) {
    result = result * x;
  }
  cout << "Result = " << result;
  return 0;
}