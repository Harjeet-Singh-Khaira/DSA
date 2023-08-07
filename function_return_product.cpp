#include<iostream>
using namespace std;

int mul(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<mul(a,b)<<endl;
    return 0;
}