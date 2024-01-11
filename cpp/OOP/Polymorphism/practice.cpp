#include<iostream>
using namespace std;

class BloodPressure{
    public:
    int systolic;
    int diastolic;
    BloodPressure(int v1, int v2){
        systolic = v1;
        diastolic = v2;
    }
};

class BMI{
    public:
    double height;
    double weight;
    double bmi;
    BMI(int v1, int v2){
        height = v1;
        weight = v2;
        bmi = weight / (height * height);
    }
};

class health : public BloodPressure, public BMI{
    public:
    health(int systolic, int diastolic, double weight,  double height):BloodPressure(systolic, diastolic), BMI(weight, height){}

    void displayOverview(){
        if(bmi < 18.5 && systolic < 90 && diastolic < 60){
            cout << "Underweight with low Blood Pressure"<<endl;
        }
        else if(bmi >= 18.5 && bmi < 24.9 && systolic >= 90 && systolic <= 120 && diastolic >= 60 && diastolic <=80){
            cout << "Healthy weight with Normal Blood Pressure" << endl;
        }
        else if(bmi >= 25.0 && bmi < 29.9 && systolic > 120 && diastolic > 80){
            cout << "Overweight with High Blood Pressure" << endl;
        }
        else{
            cout << "Healty Risk Undefined" << endl;
        }
    }
};

int main(){
    double h,w;
    int sys,dia;
    cin >> w >> h >> sys >> dia;
    health H(sys, dia, w, h);
    H.displayOverview();
}