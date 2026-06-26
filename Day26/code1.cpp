// Write a program to Create number guessing
// game.

#include <iostream>
using namespace std;

int main() {
  int secret = 7;
  int guess;

  cout << "Guess the number (1-10): ";
  cin >> guess;

  if (guess == secret)
    cout << "Correct!";
  else
    cout << "Wrong! The number was " << secret;

  return 0;
}
