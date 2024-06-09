#include<iostream>
using namespace std;

int main() {
    
    int n1, n2, n3, n4, reversed;
    cout<<"Enter Four digits: ";
    cin >> n1 >> n2 >> n3 >> n4;
    if (n1 == n4 && n2 == n3) {
    reversed = n4 * 1000 + n3 * 100 + n2 * 10 + n1;  
    cout<<"Is a palindrone";
    }else if (reversed == n1 + n2 * 10 + n3 * 100 + n4 * 1000 ) {
    cout << "Is a palindrone ";
    } else {
    cout << " Is not a palindrone ";  

   



  }

}