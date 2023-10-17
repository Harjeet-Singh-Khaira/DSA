#include<iostream>
using namespace std;

class Number{
    public:
    int n;
    Number(int n){
        this->n = n;
    }
    void print(){
        cout << n;
    }
    //casting operator function
    operator int(){
        return n;
    }
};

int main(){

    //1. Basic to class type conversion
    /*
    when we create object using the variables of primary data type then it is called as basic to class type conversion. Generally we use single argument constructor to perform type conversion from basic to class type.
    */
    Number num = 10;
    num.print();

    //2. Class type to Basic type
    /*
    when we assign an object to primitive data type variable, it is known as class type to basic type conversion. To perform this type of conversion we have to define the casting operator function

    this casting operator function must be a member of the class.
    this function cannot have any return datatype.
    this function cannot take any parameter.
    operator datatype(){
        
    }
    */
   int a = num;
   cout << a;
}