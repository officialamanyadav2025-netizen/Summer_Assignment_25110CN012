// Write a program to Find maximum occurring
// character.

#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;

  char maxChar = str[0];
  int maxCount = 0;

  for (int i = 0; i < str.length(); i++) {
    int count = 0;
    for (int j = 0; j < str.length(); j++) {
      if (str[i] == str[j])
        count++;
    }
    if (count > maxCount) {
      maxCount = count;
      maxChar = str[i];
    }
  }
  
  cout << "Maximum occurring character: " << maxChar;
  return 0;
}