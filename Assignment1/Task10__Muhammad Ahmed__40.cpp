#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1;
    cin >> num2;
    if(num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2;
    } else{
        cout << num1 << " is not a multiple of " << num2;
    }
}