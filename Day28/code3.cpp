// Write a program to Create ticket booking
// system.


#include <iostream>
using namespace std;

class Ticket
{
public:
  string name;
  int seat;

  void input(){
    cout << "Enter Passenger Name: ";
    cin >> name;
    cout << "Enter Seat Number: ";
    cin >> seat;
  }

  void display(){
    cout << "\nPassenger Name: " << name;
    cout << "\nSeat Number: " << seat;
  }
};

int main(){
  Ticket t;
  t.input();
  t.display();

  return 0;
}