// Write a program to Count even and odd
// elements.


#include <iostream>
using namespace std;

int main() {
  int arr[5];
  int even = 0;
  int odd = 0;
  cout << "Enter 5 elements: ";
  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < 5; i++) {
    if(arr[i] % 2 == 0){
      even++;
    }
    else{
      odd++;
    }
  }
  cout << "Even elements = " << even << endl;
  cout << "Odd elements = " << odd;
  return 0;
}