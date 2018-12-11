#include <iostream>

using namespace std;

class Circle{
private:
    int radius;
    float CalculateArea(void);

public:
    int colour;
    Circle(int r);
    void SetRadius(int r);
    void SetRadius(int r,int c);
    int GetRadius(void);
    void displayArea(void);
    ~Circle(){}
};

Circle::Circle(int r) {
    radius = r;
    colour = 0;
}

void Circle::SetRadius(int r) {
    radius = r;
    colour = 255;
}

void Circle::SetRadius(int r, int c) {
    radius = r;
    colour = c;
}

int Circle::GetRadius(void){
    return radius;
}

float Circle::CalculateArea() {
    return 3.14*radius*radius;
}

void Circle::displayArea(void){
    cout << "area - " << CalculateArea() << "\n";
}



int main(){
    Circle MyCircle(10);
    cout << "radius is - " << MyCircle.GetRadius() << "\n";
    cout << MyCircle.colour << "\n";
    MyCircle.SetRadius(20);
    cout << MyCircle.GetRadius() << "\n";
    MyCircle.SetRadius(40,100);
    MyCircle.displayArea();

    return 0;
}