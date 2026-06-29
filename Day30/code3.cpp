// Write a program to Create mini employee
// management system.


#include <iostream>
using namespace std;

int main()
{
    int n, id[100];
    string name[100];
    float salary[100];

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Name: ";
        cin >> name[i];
        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";
    for(int i = 0; i < n; i++)
    {
        cout << "ID: " << id[i]
             << " Name: " << name[i]
             << " Salary: " << salary[i] << endl;
    }

    return 0;
}