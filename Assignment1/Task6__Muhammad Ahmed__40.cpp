#include<iostream>
using namespace std;

int main() {
  int x, y; 
  int a = 23;
  int b = 45;
  
  x = a + b - a;
  y = a - b + b;
  cout << "a: " << x << " b: " << y;
}