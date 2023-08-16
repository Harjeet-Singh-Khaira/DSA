#include<bits/stdc++.h>
using namespace std;

//forward declaration
class B;

class A{
    int data;

    public:
    void setValue(int value){
        data=value;
    }
    friend void add(A,B);
};


class B{
    int data;

    public:
    void setValue(int value){
        data=value;
    }
    friend void add(A,B);
};

void add(A obj1,B obj2){
    cout<<"Addition of data : "<<obj1.data+obj2.data<<endl;
}

int main(){
    A a1;
    a1.setValue(40);

    B b1;
    b1.setValue(100);
    
    add(a1,b1);
    return 0;
}