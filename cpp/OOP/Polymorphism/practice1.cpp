#include<iostream>
#include<iomanip>
using namespace std;

class EmployeeAttendance{
    public:
    double hours;
    double rate;
    EmployeeAttendance(double h, double r){
        hours = h;
        rate = r;
    }
    void pay(){
        if(hours <= 40){
            cout << fixed << setprecision(2) << hours*rate;
        }
        else if(hours > 40){
            cout << fixed << setprecision(2) << ((40)*rate)+((hours - 40)*1.5*rate);
        }
    }
};

int main(){
    double h,r;
    cin>>r>>h;
    EmployeeAttendance work(h,r);
    work.pay();
}