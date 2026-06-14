// Write a program to Generate Fibonacci series.

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of terms: ";
  cin >> n;

  int a = 0, b = 1, temp;

  cout << "Fibonacci Series: ";

  for(int i = 1; i <= n; i++) {
    cout << a << " ";
    temp=a + b;
    a=b;
    b=temp;
  }

  return 0;
}