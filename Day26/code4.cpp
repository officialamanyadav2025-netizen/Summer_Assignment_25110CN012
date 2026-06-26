// Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main() {
  int answer;
  int score = 0;

  cout << "Quiz Time!\n\n";
  
  cout << "1. What is the capital of India?\n";
  cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
  cin >> answer;
  if (answer == 2){
    score++;
  }

  cout << "\n2. C++ is a?\n";
  cout << "1. Programming Language\n2. Operating System\n3. Browser\n4. Database\n";
  cin >> answer;
  if(answer == 1){
        score++;
  }

  cout << "\n3. 5 + 7 = ?\n";
  cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
  cin >> answer;
  if (answer == 3)
    score++;

  cout << "\nYour Score = " << score << " out of 3";

  return 0;
}