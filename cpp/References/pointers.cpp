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
    

    // int i = 5;

    // int *p = 0;
    // p = &i;

    // cout << p << endl;
    // cout << *p  << endl;

    // int num = 5;
    // int a = num;
    // cout << "num before : "<< num << endl;
    // a++;
    // cout << "num after : "<< num << endl;

    // int *p = &num;
    // cout << "before : " << num << endl;
    // (*p)++;
    // cout << "after : " << num << endl;

    // //copy a pointer
    // int *q = p;
    // cout << p << " - " << q << endl;
    // cout << *p << " - " << *q << endl;

    // int i = 5;
    // int *p = &i;

    // // cout << ++(*p) << endl;
    // *p = *p + 1;
    // cout << *p << endl;
    // cout << "before : " << p << endl;
    // p = p + 1;
    // cout << "after : " << p << endl;
    // cout << i << endl;

    //1
//Null pointers - which is pointing to nothing, if we don't have the adress to be assigned to a pointer, we can use NULL
    // int *p; //containg garbage value
    // int *p = NULL;
    // cout << p;

//2
//Double pointers - we can create a pointer that in turn may point to data or another pointer

// int a = 5;
// int *p = &a;
// int **q = &p;

// cout << &a << endl;
// cout << p << endl;
// cout << *q << endl;
// cout << endl;

// cout << &p << endl;
// cout << q << endl;
// cout << endl;

// cout << a << endl;
// cout << *p << endl;
// cout << **q << endl;

//3
//void ponters - it is a generic pointer, it has no associated type with it. A void pointer can hold an address of any type.

//void pointers cannot be derefernced, it can be done using typecasting the void pointer

// double i = 5;
// void *ptr = &i;


//4
//wild pointers -  when a pointer is declared but not initialized. they point at a random memory location

// int a = 5;
// int *p;

// cout << *p << endl;

//5
//Dangling pointers - a pointer pointing towards a memory location that has been deleted

}