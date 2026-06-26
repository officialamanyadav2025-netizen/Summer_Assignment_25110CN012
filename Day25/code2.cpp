// Write a program to Find common characters
// in strings.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq1[26] = {0}, freq2[26] = {0};

    for(char c : s1) freq1[c - 'a']++;
    for(char c : s2) freq2[c - 'a']++;

    for(int i = 0; i < 26; i++) {
        if(freq1[i] > 0 && freq2[i] > 0)
            cout << char(i + 'a') << " ";
    }

    return 0;
}