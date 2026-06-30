// Write a program to Create inventory
// management system.


#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    Item item[100];
    int n = 0, choice;

    do {
      cout << "\n--- Inventory Management ---\n";
      cout << "1. Add Item\n";
      cout << "2. Display Items\n";
      cout << "3. Search Item\n";
      cout << "4. Exit\n";
      cout << "Enter choice: ";
      cin >> choice;

      switch (choice) {
          case 1:
              cout << "Enter Item ID: ";
              cin >> item[n].id;

              cout << "Enter Item Name: ";
              cin >> item[n].name;

              cout << "Enter Quantity: ";
              cin >> item[n].quantity;

              cout << "Enter Price: ";
              cin >> item[n].price;

              n++;
              cout << "Item Added Successfully.\n";
              break;

          case 2:
              if (n == 0) {
                cout << "Inventory Empty.\n";
              } 
              else {
                cout << "\nID\tName\tQty\tPrice\n";
                for (int i = 0; i < n; i++) {
                  cout<< item[i].id << "\t"
                      << item[i].name << "\t"
                      << item[i].quantity << "\t"
                      << item[i].price << endl;
                }
              }
              break;

          case 3: {
              int id, found = 0;
              cout << "Enter Item ID: ";
              cin >> id;

              for (int i = 0; i < n; i++) {
                if (item[i].id == id) {
                    cout << "\nItem Found\n";
                    cout << "ID: " << item[i].id << endl;
                    cout << "Name: " << item[i].name << endl;
                    cout << "Quantity: " << item[i].quantity << endl;
                    cout << "Price: " << item[i].price << endl;
                    found = 1;
                    break;
                }
              }

              if (!found)
                cout << "Item Not Found.\n";
                break;
          }

          case 4:
              cout << "Exiting...\n";
              break;

          default:
              cout << "Invalid Choice!\n";
      }

    }while (choice != 4);

  return 0;
}