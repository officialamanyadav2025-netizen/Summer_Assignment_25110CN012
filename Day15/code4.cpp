// Write a program to Move zeroes to end.

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 0, 2, 0, 3, 4, 0};
  int n = 7;

  int temp[7];
  int index = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
      temp[index] = arr[i];
      index++;
    }
  }
  while(index < n) {
    temp[index] = 0;
    index++;
  }
  cout << "Array after moving zeroes: ";
  for(int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }

  return 0;
}