// Write a program to Find diagonal sum. 

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int A[100][100];
  int sum = 0;

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> A[i][j];

  for(int i = 0; i < n; i++)
    sum += A[i][i];

  cout << "Diagonal Sum = " << sum;

  return 0;
}