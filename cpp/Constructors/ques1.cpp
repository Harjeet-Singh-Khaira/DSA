#include<bits/stdc++.h>
using namespace std;

// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.

class Rectangle{
    int length;
    int width;
    public:
    Rectangle(){}
    Rectangle(int l, int b){
        length = l;
        width = b;
    }

    int getArea(){
        return length*width;
    }

    int getPerimeter(){
        return 2*(length + width);
    }
};

int main(){
    Rectangle rect(20,10);
    cout<<rect.getArea()<<endl<<rect.getPerimeter()<<endl;
}