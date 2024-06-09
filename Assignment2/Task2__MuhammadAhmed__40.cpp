#include <iiostream>
using namespace std;
int main () {
    float n, sum;
    cout<<"Enter days you present in class: ";
    cin>>n;
    sum = (n/200)*100;
    if(sum >= 75) 
    {
        cout<<"Your attendence is "<<sum<<"%";
    }else
    {
        cout<<"Your attendence is less than 75%: "<<sum<<"%";
    }
}