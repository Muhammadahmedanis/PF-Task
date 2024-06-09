#include<iostream>
using namespace std;

int main() {
    
    int Input;

    cout<<"Enter the value of TH: ";
    cin >> Input;
    
    int Output = Input * 1000;

    cout << "Enter the value of H: ";
    cin >> Input;
    Output = Output + Input * 100;
    cout << "Enter the value of T: ";
    cin >> Input;
    Output = Output + Input * 10;
    cout << "Enter the value of U: ";
    cin >> Input;
    Output = Output + Input;
    cout << "The 4-digits number: " << Output;

}