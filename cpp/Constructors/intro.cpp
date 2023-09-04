#include<iostream>
using namespace std;

//A constructor is a special type of member function that is called automatically when an object is created.

//Constructor's name is same as the class name.

//default constructor has no parameters, however input  arguments are available for parametised constructor and copy constructors.

class Student{
    public:
    string name;
    int age;
    string gender;
    
    //Default consturctor
    Student(){
        cout<<"TEST"<<endl;
        age = 10;
    }

    Student(string myName, int myAge){
        name = myName;
        age = myAge;
    }
};

int main(){
    Student s1("hello",22);
    Student s2;

    //when object is created with parameters/signature matching the constructor then parametrised constructor is called. But when object without parameters is initialised then default constructor is called.

    cout << s1.name <<endl;
    cout << s1.age <<endl;
    cout << s2.age <<endl;
}