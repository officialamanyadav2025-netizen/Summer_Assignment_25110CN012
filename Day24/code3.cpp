// Write a program to Find longest word.

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  string word, longest = "";
  stringstream ss(str);

  while (ss >> word) {
    if (word.length() > longest.length())
      longest = word;
  }

  cout << longest;

  return 0;
}