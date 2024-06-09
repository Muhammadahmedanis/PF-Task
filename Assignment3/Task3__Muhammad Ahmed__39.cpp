#include <iostream>
using namespace std;

int main (0)
{
   int min;
   cout<<"Enter minutes to convert into Hour & minutes: ";
   cin>>min;

   cout << min / 60 << " Hour : "<< min % 60 << " Minutes ";
}
