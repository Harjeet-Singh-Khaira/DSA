#include<iostream>
using namespace std;

//Polymorphism -> Poly = many, Morph = forms
//same thing behaving differently in different situations.

//function overloading -> in function overloading we can use two function having same name if they have different parameters (either numbers or type of parameters)

//it's a COMPILE TIME POLYMORPHISM because the compiler knows which function to execute before the program is compiled.

int sum(int num1,int num2){
    return num1+num2;
}

int sum(int num1,int num2,int num3){
    return num1+num2+num3;
}

int main(){
    cout << sum(1,4,2) << endl;
}