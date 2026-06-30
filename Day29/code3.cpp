// Write a program to Create menu-driven
// string operations system.


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], str2[100];
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Find Length\n";
        cout << "2. Copy String\n";
        cout << "3. Concatenate String\n";
        cout << "4. Compare Strings\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << strlen(str) << endl;
                break;

            case 2:
                strcpy(str2, str);
                cout << "Copied String = " << str2 << endl;
                break;

            case 3:
                cout << "Enter another string: ";
                cin >> str2;
                strcat(str, str2);
                cout << "Concatenated String = " << str << endl;
                break;

            case 4:
                cout << "Enter another string: ";
                cin >> str2;

                if (strcmp(str, str2) == 0)
                    cout << "Strings are Equal\n";
                else
                    cout << "Strings are Not Equal\n";
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}