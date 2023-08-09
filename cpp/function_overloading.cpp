#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

float add(float a,float b){
    return a+b;
}

int main(){
    cout<<add(2,2)<<endl;
    cout<<add(2.2f,2.2f)<<endl;
    cout<<add(2,5,10)<<endl;
    return 0;
}