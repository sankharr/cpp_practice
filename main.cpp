#include <iostream>

using namespace std;

class ThreeNos{
private:
    int n1,n2,n3;
public:
    ThreeNos():n1(0),n2(0),n3(0){};
    ThreeNos(int x,int y, int z):n1(x),n2(y),n3(z){};
    int getMax(int x,int y,int z){
        if(x>y && x>z)
            return x;
        else if(y>x && y>z)
            return y;
        else
            return z;
    }
    int getMin(int x,int y,int z){
        if(x<y && x<z)
            return x;
        else if(y<x && y<z)
            return y;
        else
            return z;
    }
    int sum(){
        return n1+n2+n3;
    }
    float average(){
        return (sum()/3);
    }


};

int main(){

    ThreeNos tn1(5,9,7);
    cout << "max - " <<tn1.getMax(5,9,7) << "\n";
    cout << "min - " <<tn1.getMin(5,9,7) << "\n";
    cout << "sum - " <<tn1.sum() << "\n";
    cout << "avg - " <<tn1.average() << "\n";

    return 0;
}