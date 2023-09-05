#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(){}

    A(int a, int b){
        this->a=a;
        this->b=b;
    }

    void display(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    A obj(10,20);
    obj.display();
}