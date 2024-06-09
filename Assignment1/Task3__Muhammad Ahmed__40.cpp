#include<iostream>
using namespace std;

int main () {

    int U, T, H, TH, number;

   cout << "Enter the units digit: ";
   cin >> U;
   cout << "Enter the tens digit: "; 
   cin >> T;
   cout << "Enter the hundreds digit: ";
   cin >> H;
   cout << "Enter the thousands digit: ";
   cin >> TH;

   number = TH * 1000 + H * 100 + T * 10 + U;
   cout << "The 4-digits number is: " << number;
}
