#include<iostream>
using namespace std;

class fraction{
    int a,b;
    public:
    fraction(){
        a=0;
        b=0;
    }

    void input(){
        cout << "Enter numerator: ";
        cin >> a;

        cout << "Enter denominator: ";
        cin >> b;
    }

    fraction operator *(fraction &obj){
        fraction temp;
        temp.a = obj.a *a;
        temp.b = obj.b*b;
        return temp;
    }

    void display(){
        cout << "The fraction is " << a << "/" << b << endl;
    }
};

int main(){
    fraction f1,f2,f3;
    cout << "For first fraction:" << endl;
    f1.input();
    cout << "For second fraction:" << endl;
    f2.input();

    f3 =  f1*f2;
    f3.display();
}