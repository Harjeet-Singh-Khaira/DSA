#include<iostream>
using namespace std;

//templaets allows us to write generic programs.
//can be implemented in two ways - 1.Function Templates 2.Class Templates

/*
1.2 Defining class members outside class template
*/

template<class t>
class Number{
    t num;
    
    public:
    Number(t n){
        num = n;
    }

    // t getNum(){
    //     return num;
    // }

    t getNum();
};

template<class t>
t Number<t> :: getNum(){
    return num;
}
int main(){
    Number<int> n1(2);   
    Number<float> n2(2.09);   
    Number<string> n3("abc");   
    
    cout << n1.getNum() << endl;
    cout << n2.getNum() << endl;
    cout << n3.getNum() << endl;
}