#include <iostream>
using namespace std;

int main () {
    int num1, num2, sum, q, p;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;        
        
    for (num1; num1 <= num2 ; num1++) {
        p = num1 % 10;
        q = num1 / 10;
        sum = sum + p + q;
    }
    cout<<"Sum is: "<<sum;


    int num1, num2, sum, q, p;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;

    while (num1 <= num2) {
        p = num1 % 10;
        q = num1 / 10;
        sum = sum + p + q;
        num1++;
    }
    cout<<"Sum is: "<<sum;

}