#include<iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter year: ";
    cin>>year;
   if(year % 4 == 0) {
       cout<<year<<" Is a leap year";
    }else if(year % 100 == 0) {
       cout<<year<<" Is not a leap year";
    }else if(year % 400 == 0) {
       cout<<year<<" Is a leap year";
    }else {
       cout<<year<<" Is not a leap year";
    }
}