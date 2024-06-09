#include <iostream>
using namespace std;

int main() {
    int num,sum,i,p{0};
    cout<<"Enter Number: ";
    cin>>num;
    while(num > 0) 
    {   
        i =  num % 10;  
        num = num / 10; 
        p = p + i; 
        sum++;
    }
        cout<<"Digits is: " << sum << endl;
        cout<<"Sum of given digits: "<<p;


    int num, sum, i, p{0};
    cout<<"Enter: ";
    cin>>num;

    for (i; num > 0; i++) 
    {
        sum =  num % 10;  
        num =  num / 10; 
        p = p + sum;  
    }
        cout<<"Digits is " << i <<endl;
        cout<<"Sum is: " << p;




}