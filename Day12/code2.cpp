// Write a program to Write function for
// Armstrong.


#include <iostream>
using namespace std;

bool armstrong(int n){
  int sum = 0, temp = n;
  while (n > 0){
    int digit = n % 10;
    sum += digit * digit * digit;
    n = n / 10;
  }
  return temp == sum;
}
int main(){
  int n;
  cin >> n;
  if (armstrong(n))
    cout << "Armstrong";
  else
    cout << "Not Armstrong";
  return 0;
}