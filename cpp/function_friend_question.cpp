// Define a class Rectangle with private attributes length and width.
// Create a friend function named calculateArea that calculates the area of the rectangle.

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    int length,width,Area;

    public:
    void setValues(int a,int b){
        length=a;
        width=b;
    }

    void setArea(int a){
        Area=a;
    }

    void printArea(){
        cout<<"area of rectangle is "<<Area<<endl;
    }

    friend Rectangle calculateArea(Rectangle);
};

Rectangle calculateArea(Rectangle obj1){
    Rectangle result;
    result.setArea(obj1.length * obj1.width);
    return result;
}

int main(){
    Rectangle obj1,Area;
    obj1.setValues(2,4);
    Area= calculateArea(obj1);
    Area.printArea();
}