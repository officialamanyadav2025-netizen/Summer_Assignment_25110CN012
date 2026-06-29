// Write a program to Develop complete mini
// project using arrays, strings and functions.


#include <iostream>
using namespace std;

struct Student{
  int roll;
  string name;
  float marks;
};

Student s[100];
int n;

void addStudents(){
  cout << "Enter number of students: ";
  cin >> n;

  for(int i=0;i<n;i++){
    cout << "\nStudent " << i+1 << endl;

    cout << "Roll: ";
    cin >> s[i].roll;

    cout << "Name: ";
    cin >> s[i].name;

    cout << "Marks: ";
    cin >> s[i].marks;
  }
}

void displayStudents(){
  cout << "\nStudent Records\n";

  for(int i=0;i<n;i++){
    cout<< s[i].roll << " "
        << s[i].name << " "
        << s[i].marks << endl;
  }
}

int main(){
  int choice;

  do{
    cout << "\n1. Add Students";
    cout << "\n2. Display Students";
    cout << "\n3. Exit";
    cout << "\nEnter Choice: ";
    cin >> choice;
    
    switch(choice){
      case 1:
        addStudents();
        break;

      case 2:
        displayStudents();
        break;

      case 3:
        cout << "Program End";
        break;

      default:
        cout << "Invalid Choice";
    }

  } while(choice != 3);

  return 0;
}