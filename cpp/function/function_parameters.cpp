#include<bits/stdc++.h>
using namespace std;

void printname(string name="nice", int marks=50){
    cout<<"My name is "<<name<<" and I got "<<marks<<"% in 12th"<<endl;
}

int main(){
    string a;
    cin>>a;
    printname(a);
    printname("hello",93);
    return 0;
}