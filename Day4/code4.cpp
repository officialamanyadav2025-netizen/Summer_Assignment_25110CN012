// Write a program to Print Armstrong numbers
// in a range.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int start, end;
  cout << "Enter start and end range: ";
  cin >> start >> end;
  cout << "Armstrong Numbers: ";
  for(int num = start; num <= end; num++) {
    int temp = num, digits = 0;
    double sum = 0;
    while(temp != 0) {
      digits++;
      temp /= 10;
    }
    temp = num;
    while(temp != 0) {
      int rem = temp % 10;
      sum += pow(rem, digits);
      temp /= 10;
    }
    if(sum == num)
      cout << num << " ";
    }

  return 0;
}