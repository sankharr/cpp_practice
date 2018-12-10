//tut1 - q3

//#include <iostream.h>
#include <iomanip>
#include <iostream>

#define size 27

using namespace std;

// class declaration

class stack{
private:
    char array[size];
    int top;

public:
    stack();
    void load_stack();
    void show_stack();
    char pop();
    void push(char);
    //~stack();
};

stack::stack() {
    //array = new int[size];
    top = -1;
}

void stack::load_stack() {
    char cara = 'A';
    for(int i = 0; i<27; i++){
        top++;
        array[top] = cara;
        cara++;
    }
}

void stack::show_stack() {
    cout << "Contents in stack are - ";
    for(int i = top; i>-1; i--){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void stack::push(char cara) {
    top++;
    array[top] = cara;
}

char stack::pop() {
    char cara = array[top];
    cout << "popped element is - " << cara << "\n";
    top--;
    return cara;
}


//stack::~stack() {
//    delete []array;
//
//};


int main(){

    stack stack1;
    stack1.load_stack();
    stack1.show_stack();
    stack1.pop();
    stack1.push('s');
    stack1.show_stack();


}