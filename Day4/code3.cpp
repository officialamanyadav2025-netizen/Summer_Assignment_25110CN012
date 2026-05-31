// Write a program to Check Armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num, temp;
  int remainder, digits = 0;
  double sum = 0;
  cout << "Enter a number: ";
  cin >> num;
  temp = num;
  while(temp != 0) {
    digits++;
    temp /= 10;
  }
  temp = num;
  while(temp != 0) {
    remainder = temp % 10;
    sum += pow(remainder, digits);
    temp /= 10;
  }
  if(sum == num)
    cout << num << " is an Armstrong Number";
  else
    cout << num << " is not an Armstrong Number";

  return 0;
}