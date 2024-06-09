#include <iostream>
using namespace std;

int main() {

    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    if(marks >= 85) {
        cout<<"Your GPA is 4.0 ";
    }else if(marks > 80) {
        cout<<"Your GPA is 3.8 ";
    }else if(marks > 75) {
        cout<<"Your GPA is 3.4 "; 
    }else if(marks >= 71) {
        cout<<"Your GPA is 3.0"; 
    }else if(marks >= 68) {
        cout<<"Your GPA is 2.8"; 
    }else if(marks >= 64) {
        cout<<"Your GPA is 2.4";
    }else if(marks >= 61) {
        cout<<"Your GPA is 2.0";
    }else if (marks >= 57) {
        cout<<"Your GPA is  1.8";
    }else if(marks >= 54) {
        cout<<"Your GPA is 1.4 ";
    }else if(marks >= 50) {
        cout<<"Your GPA is 1.0 ";
    }else {
        cout<<"You are Failed ";
    }
    
}