#include<iostream>
using namespace std;

int main() {
    int a = 45;
    int b = 23;

    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << " b: " << b;
}