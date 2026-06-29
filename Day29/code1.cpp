// Write a program to Create student record
// system using arrays and strings.


#include <iostream>
using namespace std;

struct Student{
  int roll;
  string name;
  float marks;
};

int main(){
  int n;
  cout << "Enter number of students: ";
  cin >> n;

  Student s[100];

  for(int i=0;i<n;i++){
    cout << "\nStudent " << i+1 << endl;
    cout << "Roll: ";
    cin >> s[i].roll;
    cout << "Name: ";
    cin >> s[i].name;
    cout << "Marks: ";
    cin >> s[i].marks;
  }

  cout << "\nStudent Records\n";
  for(int i=0;i<n;i++){
    cout<< s[i].roll << " "
        << s[i].name << " "
        << s[i].marks << endl;
  }

  return 0;
}