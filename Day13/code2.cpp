// Write a program to Find sum and average of
// array.

#include <iostream>
using namespace std;

int main() {
  int arr[5], sum = 0;
  cout << "Enter 5 elements: ";
  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
    sum = sum + arr[i];
  }
  float avg = sum / 5.0;
  cout << "Sum = " << sum << endl;
  cout << "Average = " << avg;
  return 0;
}