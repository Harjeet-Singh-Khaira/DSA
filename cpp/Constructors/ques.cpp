#include<iostream>
using namespace std;

// Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the employee's name, salary, and employeeCode.

class Employee{
    string name;
    int salary;
    int employeeCode;
    public:

    Employee(){}

    Employee(string n, int sal, int id){
        name = n;
        salary = sal;
        employeeCode = id;
    }

    void displayInfo(){
        cout<<"Employee Name: " << name << endl;
        cout<<"Employee salary: " << salary <<endl;
        cout<<"Employee code: "<< employeeCode <<endl;
    }
};

int main(){
    Employee e1("nice",200000,420);
    e1.displayInfo();
}