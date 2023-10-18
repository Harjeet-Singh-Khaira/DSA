#include<iostream>
using namespace std;

template <class T, class U, class V>
class A{
    T var1;
    U var2;
    V var3;

    public:
    A(T v1, U v2, V v3){
        var1 = v1;
        var2 = v2; 
        var3 = v3;
    }

    void print(){

        cout << "var1 : " << var1 << endl;
        cout << "var2 : " << var2 << endl;
        cout << "var3 : " << var3 << endl;
    }
};

int main(){
    A<int, double, char> obj1(2,2.2,'k');
    obj1.print();
}