#include<iostream>
using namespace std;

int main() {
   float BMI, heightInInches, weightInPounds;
    cout<<"Enter height in inches: ";
    cin>>heightInInches;
    cout<<"Enter weight in Pounds: ";
    cin>>weightInPounds;
    BMI = (weightInPounds * 703) / (heightInInches * heightInInches);
    cout<<"Your BMI Value: " << BMI << "\n(According to department of health and Human services/National Institute of Health)"<<endl;
    if(BMI < 18.5) {
        cout<< "Your BMI is  Underweight";
    } else if(BMI > 18.5 && BMI < 24.9){
        cout<<"Yout BMI is Normal";
    } else if(BMI > 25 && BMI < 29.9) {
        cout<<"Your BMI is Overweight";
    } else {
        cout<<"Your BMI is Obese";
    }

}