#include<iostream>
using namespace std;

int main() {
    
    int n1, n2 , n3, n4, Output;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    cout<< "Enter n3: ";
    cin >> n3;
    cout << "Enter n4: ";
    cin >> n4;

    Output = n4 * 1000 + n3 * 100 + n2 * 10 + n1; 
    cout << "Output is :  " << Output;
}