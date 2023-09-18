#include<iostream>
using namespace std;

//multiple inheritance- when one child class inherits from two or more classes.

class A{
    public:
    // int a;
    // void get(int n){
    //     a=n;
    // }
    void display(){
        cout<<"A"<<endl;
    }
};

class B{
    public:
    // int b;
    // void get(int n){
    //     b=n;
    // }
    void display(){
        cout<<"B"<<endl;
    }
};

class C : public A, public B{
    public:
    // void display(){
    //     cout<<"Value of a is : "<<a<<endl;
    //     cout<<"Value of b is : "<<b<<endl;
    //     cout<<"Sum of a and b is : "<<a+b<<endl;
    // }

    void print(){
        A::display();
    }
};

int main(){
    
    C c1;
    // c1.get(2);
    // c1.get(4);

    // c1.display();

    c1.print();
}