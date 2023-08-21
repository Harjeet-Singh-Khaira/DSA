#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=123;
    float b=12.1212;

    cout<<setfill('*')<<setw(15)<<a<<endl;
    cout<<setprecision(4)<<b<<endl;
}