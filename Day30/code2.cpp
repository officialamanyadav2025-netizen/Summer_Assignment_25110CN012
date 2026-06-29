// Write a program to Create mini library
// system.


#include <iostream>
using namespace std;

struct Book{
  int id;
  string name;
};

int main(){
  int n;

  cout << "Enter number of books: ";
  cin >> n;
  Book b[100];

  for(int i=0;i<n;i++){
    cout << "\nBook " << i+1 << endl;
    cout << "Book ID: ";
    cin >> b[i].id;
    cout << "Book Name: ";
    cin >> b[i].name;
  }
  
  cout << "\nLibrary Books\n";

  for(int i=0;i<n;i++){
    cout << b[i].id << " " << b[i].name << endl;
  }

  return 0;
}