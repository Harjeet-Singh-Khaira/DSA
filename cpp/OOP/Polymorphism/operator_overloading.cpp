#include<bits/stdc++.h>
using namespace std;

 //Operator overloading -> we can overload an operator as long as we are operating on user-defined types like objects and structures 
 //we cannot use operator overloading for basic types such as int, double etc.
//we can overload user difined type operators


 class Count{
    int value;

    public:
    Count(){
        value = 10;
    }

    void operator ++ (){
        value = value +2;
    }

    void display(){
        cout << "Count : " << value << endl;
    }
 };

int main(){
    
    Count count1;
    int x = 2;

    ++x;
    ++count1;
    count1.display();
    cout << "x : " << x << endl;

}

/*
    Rules for operator overloading
    -at least one of the operand must be a user defined class object
    -we can only overload existing operators 
    -some operators cannot be overloaded
        - ?:, ::, ., 
*/