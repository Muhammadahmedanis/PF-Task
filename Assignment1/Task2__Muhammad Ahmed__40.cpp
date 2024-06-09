#include<iosream>
using namespace std;

int main() {
    int x1, x2, y1, y2, slope;
    y2 = 6;
    y1 = 4;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter x2: ";
    cin>>x2;
    slope = (y2 - y1) / (x2 - x1);
    cout<<"Slope is: " << slope;
}