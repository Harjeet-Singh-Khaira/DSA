#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int var=10;

    double d=10.4;
    double *ptr2=&d;
    
    int *ptr = &var;

    cout<<&var<<endl;//address of var
    cout<<ptr<<endl;//address of var
    cout<<*ptr<<endl;//derefrencing the pointer

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;//size doesn't depend on size of variable it is refrencing.
    
}