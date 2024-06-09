#include <iostream>
using namespace std;

int main() {
    int n, p=2, i, k{0};
cout<<"Enter: ";
cin>>n;
while (n) 
{
    for (i=2; i<p; i++) 
        {
        if (p%i==0) 
            break;
        }
            if (i==p) 
            {
                cout<<p<<" ";
                k = k + p;
                n--;
            }
            p++;
    }
    cout<<"\nSum is:"<<k;
}
