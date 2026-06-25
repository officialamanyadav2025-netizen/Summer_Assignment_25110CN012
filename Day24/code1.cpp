// Write a program to Check string rotation.

#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  if ((s1 + s1).find(s2) != -1)
    cout << "Rotation";
  else
    cout << "Not Rotation";

  return 0;
}