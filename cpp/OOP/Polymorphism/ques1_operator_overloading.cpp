#include<iostream>
using namespace std;

class abc{
    int a;
    public:
    abc(){
        a=0;
    }

    void input(){
        cin >> a;
    }

    void operator !(){
        a= a*1000;
    }

    void display(){
        cout << a << endl;
    }
};

int main(){
    abc f2;
    f2.input();

    !f2;

    f2.display();
}