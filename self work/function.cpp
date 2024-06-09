#include <iostream>
using namespace std;


//  int power(int x, int y) {
//     int ans = 1;
//     for(int i = 0; i < y; i++)
//     {
//         ans *= x;
//     }
//     return ans;
// }


// pascal
// int ncr(int n, int r) 
// {
//  int a = fac(n);
//  int b = fac(r);
//  int c = fac(n-r);
//  return a / (b*c);
// }


// combination
// int fac(int x) 
// {
//     int f = 1;
//     for(int i = 1; i <= x; i++)
//     {
//         f *= i;
//     }
//     return f;
// }



// void swap (int& x, int& y)
// {
//     x = x + y;    //6
//     y = x - y;   //4 
//     x = x - y;  //2
//     // return 0;
// }


int add(int , int);
int sub(int , int);

int main() {
int n, a{4}, b{2}, c;
cout<<"Enter \n1 for add && 2 for sub: ";
cin>>n;
if(n == 1)
{
    c = add(a, b);
}
else 
{
    c = sub(a, b);
    
}
cout<<"Output---- "<<c;


//     int a = 2, b = 3;
//     int answer = power(a, b);
//     cout<<"Answer is: "<<answer;



// pascal triangle
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j <= i; j++)
    //     {
    //         cout<<ncr(i, j)<<" ";
    //     }
    //     cout<<endl;
    // }


// int n, r;
    // cout<<"Enter n: ";
    // cin>>n;
    // cout<<"Enter r: ";
    // cin>>r;
    // int a = fac(n);
    // int b = fac(r);
    // int c = fac(n-r);
    // cout<<a/(b*c);



    // swap
    // int a, b;
    // cout<<"Enter a: ";
    // cin>>a;
    // cout<<"Enter b: ";
    // cin>>b;
    // cout<<a<<" "<<b<<endl;
    // swap(a, b);
    // cout<<a<<" "<<b;
}

int add(int a, int b)
{
    int add = a + b;
    return add;
    
}
int sub(int a, int b)
{
    int sub = a - b;
    return sub;
    
}

