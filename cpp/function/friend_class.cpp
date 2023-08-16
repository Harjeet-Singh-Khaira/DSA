#include<bits/stdc++.h>
using namespace std;

class Complex;
class Calculator{
    int SumReal(Complex,Complex);
    int SumImaginary(Complex,Complex);
};

class Complex{
    int a,b;

    public:
    void setNumber(int num1,int num2){
        a=num1;
        b=num2;
    }

    void print(){
        cout<<"Your number is: "<<a<<"+"<<b<<"i"<<endl;
    }

    friend int Calculator::SumReal(Complex obj1,Complex obj2);
    friend int Calculator::SumImaginary(Complex obj1,Complex obj2);

};

int Calculator::SumReal(Complex obj1,Complex obj2){
    return obj1.a + obj2.a;
}

int Calculator::SumImaginary(Complex obj1,Complex obj2){
    return obj1.b + obj2.b;
}

int main(){
    Complex o1,o2;
    int a,b;

    o1.setNumber(1,2);
    o2.setNumber(2,3);

}