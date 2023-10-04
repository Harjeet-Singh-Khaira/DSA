#include<iostream>
using namespace std;

//VIRTUAL FUNCTIONS
//a virtual function is a member function in the base class that we expect to redefine in derieved class.
//a virtual function is used in base class in order to ensure that the function is overriden.This especially applies to cases where a pointer of base class points to an object of a derieved class.

//OVERRIDE
//the override identifier specifies the member function of the derieved class that overrides the member function of the base class.

//when using virtual function, it is possible to make mistakes while declaring the member functions of the derived class. Using OVERRIDE identifier prompts the compiler to display error.
//possible mistakes - function with incorrect spellings/names, different parameters, different return types..

class Base{
    public:
    virtual void print(){
        cout<<"Base";
    }
};

class Derived : public Base{
    public:
    void print() override{
        cout<<"Derived";
    }
};

int main(){
    Derived d1;

    Base* b1 = &d1;
    b1->print();
}