#include <iostream>

using namespace std;

class Shape{
protected:
    float width,height;
public:
    Shape(float w, float h);
    void set_data(float a,float b){
        width = a; height = b;
    }
};

Shape::Shape(float w, float h){
    width = w; height = h;
}

class Rectangle: public Shape{

private:
    float calculateArea(){
        return ((width*height));
 }

public:
    void displayArea(){
        cout << "Rec - " << calculateArea() << "\n";
    }

    Rectangle(int i, int i1) : Shape(i,i1){};
};

class Triangle: public Shape{

private:
    float calculateArea(){
        return ((width*height)/2);
    }
public:
    void displayArea(){
        cout << "Tri - " << calculateArea() << "\n";
    }

    Triangle(float d, float d1) : Shape(d, d1){};
};

int main(){
    Triangle Triangle1(2.0,3.0);
    Rectangle rec(4,5);
    Triangle1.displayArea();
    rec.displayArea();
}