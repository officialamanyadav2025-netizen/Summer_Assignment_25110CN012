// Write a program to Intersection of arrays

#include <iostream>
#include <set>
using namespace std;

int main() {
  int n, m;
  cout << "Enter size of first array: ";
  cin >> n;
  int a[n];
  cout << "Enter elements of first array: ";
  for(int i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter size of second array: ";
  cin >> m;
  int b[m]; 
  cout << "Enter elements of second array: ";
  for(int i = 0; i < m; i++)
    cin >> b[i];
  set<int> s;
  for(int i = 0; i < n; i++)
    s.insert(a[i]);
    cout << "Intersection: ";
  for(int i = 0; i < m; i++) {
    if(s.count(b[i]))
      cout << b[i] << " ";
  }
  
  return 0;
}