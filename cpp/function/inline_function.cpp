#include<bits/stdc++.h>
using namespace std;

//A function is used to reduce the code redudancy as well as to save memory space as invoked, a bunch of tasks are performed (matching arguments, matching return [happens internally])

//but when function definitation consist of hardly one or two statements, then this bunch of tasks appeas to me time consuming, so to fix this we use the concept of inline funcions.

//When a function is declared inline, the "Function body" is replicated as function calling space

inline int add(int a,int b){
    return a+b;
}

int main(){
    
    cout<<"Sum: "<<add(2,3);

}