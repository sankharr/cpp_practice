#include <iostream>
class Time
{
private:
    int h,m,s;
public:
    Time(){
        h=0, m=0; s=0;
    }
    void getTime();
    void show(){
        std::cout<<h<<":"<<m<<":"<<s;
    }
    Time operator+(Time); //overloading '+' operator
};
Time Time::operator+(Time t1)
//operator function
{
    Time t;
    int a,b;
    a=s+t1.s;
    t.s=a%60;
    b=(a/60)+m+t1.m;
    t.m=b%60;
    t.h=(b/60)+h+t1.h;
    t.h=t.h%12;

    return t;
}
void Time::getTime()
{
    std::cout<<"\n Enter the hour(0-11) ";
    std::cin>>h;
    std::cout<<"\n Enter the minute(0-59) ";
    std::cin>>m;
    std::cout<<"\n Enter the second(0-59) ";
    std::cin>>s;
}
int main()
{
    Time t1,t2,t3,t4;
    std::cout<<"\n Enter the first time ";
    t1.getTime();
    std::cout<<"\n Enter the second time ";
    t2.getTime();
    std::cout<<"\n Enter the third time ";
    t4.getTime();
    t3=t1+t2+t4;
//adding of two time object using '+' operator
    std::cout<<"\n First time ";
    t1.show();
    std::cout<<"\n Second time ";
    t2.show();
    std::cout<<"\n Sum of times ";
    t3.show();
}