// Write a program to Find string length
// without strlen().

#include <iostream>
using namespace std;

int main() {
  char str[100];
  int count = 0;

  cout << "Enter a string: ";
  cin >> str;

  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  cout << "Length of string = " << count;
  
  return 0;
}