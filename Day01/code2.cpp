// Write a program to Print multiplication table of
// a given number.

#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "ENTER THE NUMBER : ";
    cin >> n;

    // Loop from 1 to 10
    for(int i = 1; i <= 10; i++) {

        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}