#include<iostream>
using namespace std;

//abstract class refers to a class containing atleast one pure virtual function, which can not be instantiated

//characteristics -
//1- abstract class must have at least one pure virtual function
//2- abstract classes cannot be instantiated, but pointer and references of abstract class types can be created. We cannot create object of an abstract class. 
//3- classes that inherits the abstract class must implement all pure function.


class shape{
    public:
    int shape_width,shape_height;

    void width(int w){
        shape_width = w;
    }

    void height(int h){
        shape_height = h;
    }

    virtual int perimeter() = 0;
};

class Rectangle : public shape{
    public:
    int perimeter(){
        return 2 * (shape_height+shape_width);
    }
};

class Square : public shape{
    public:
    int perimeter(){
        return 4 * shape_width;
    }
};

int main(){
    shape* s = new Rectangle;
    Rectangle r1;
    Square s1;

    r1.width(10);
    r1.height(5);
    s1.width(12);

    cout << r1.perimeter();
}