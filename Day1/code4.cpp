// Write a program to count digits in a number

#include<iostream>
using namespace std;

int main() {

    int n, count = 0;

    cout << "ENTER THE NUMBER : ";
    cin >> n;

    // Counting digits using loop
    while(n != 0) {
        n = n / 10;
        count++;
    }

    cout << "TOTAL DIGITS ARE : " << count;

    return 0;
}