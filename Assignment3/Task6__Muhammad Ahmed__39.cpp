#include <iostream>
using namespace std;

int main () {

    // a
    int n , i, j; 
    cout<<"Enter rows: ";
    cin>>n;
    for (i=n; i>0; i--) 
    {
        for (j=1; j<=i; j++) 
        {
            char ch = 'A'+j-1;
            cout<< ch;
        }
        cout<<endl;
    }


    //  b
    int n, i ,j, k;
    cout<<"Enter rows: ";
    cin>>n;
    
    for (i=n; i>0; i--) {
        for (j=i; j>0; j--) {
            char ch = 'A'+j-1;
            cout<<ch;
        }
        cout<<endl;
    }


     
    //  c
    int n, i ,j, k, l;
    cout<<"Enter rows: ";
    cin>>n;
    
    for (i=n; i>0; i--) 
    {
        for (j=i; j>0; j--) 
        {
            char ch = 'A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    };

        for (k=2; k<=n; k++) 
        {
            for (l=1; l<=k; l++) 
            {
                char ch = 'A'+k-l;
                cout<< ch<<" ";
            }
            cout<<endl;
        }


    // d
    int n , i, j, k, l; 
    cout<<"Enter rows: ";
    cin>>n;
    
    for (i=n ; i>0; i--) 
    {
        for (j=1; j<=i; j++) 
        {
            char ch = 'A' +j-1;
            cout<<ch;
        }
        cout<<endl;
    };
    
        for (k=2 ; k<=n; k++) 
        {
            for (l=1; l<=k; l++) 
            {
                char ch = 'A' +l-1;
                cout<<ch;
            }
            cout<<endl;
        }


}