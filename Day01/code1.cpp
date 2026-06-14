// Q1. Write a program to Calculate sum of first N
// natural numbers 

#include<iostream>
using namespace std;

int main(){
  int n;
  int sum=0;

  cout<<"ENTER THE NUMBER : ";
  cin>>n;

  for(int i=0;i<=n;i++){
    sum=sum+i;
  }

  cout<<"Sum="<<sum;

  return 0;
}