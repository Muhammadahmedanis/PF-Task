#include<iostream>
using namespace std;

int main() {
    int startHour, endHour, startMin, endMin;
char colon;
string am_pm;

cout<<"Enter Starting time (HH:MM AM/PM): ";
cin>>startHour >> colon >> startMin >> am_pm;

if (am_pm == "PM" && startHour != 12) 
{
    startHour += 12;
}   
    else if (am_pm == "AM" && startHour == 12) 
    {
        startHour = startHour;
    }    

cout<<"\nEnter ending time (HH:MM AM/PM): ";
cin>>endHour >> colon >> endMin >> am_pm;


if (am_pm == "PM" && endHour != 12) 
{
    endHour += 12;
}   
    else if (am_pm == "AM" && endHour == 12) 
    {
        endHour = 0;
    }

int totalMinStart = startHour*60 + startMin;
int totalMinEnd = endHour*60 + endMin;
int totalMin = totalMinEnd - totalMinStart;
cout<<"Minutes between "<<startHour<<":"<<startMin << am_pm <<
" and "<< endHour<<":"<<endMin<<am_pm<<" "<<totalMin;
}