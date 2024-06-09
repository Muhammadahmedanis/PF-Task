#include <iostream>
using namespace std;

int main() {
    int n, sum{0}, p, x;
    cout<<"Enter number to check wheather it is armstrong number or not : ";
    cin>>n;
    x = n;
    while(x >0) {
        p = x % 10;
        sum = sum + (p*p*p);  
        x /= 10;
    }
     if(n == sum) 
     {
         cout<<sum<<" is a number";
     }
     else
     {
         cout<<sum<<" not a number";
     }

}