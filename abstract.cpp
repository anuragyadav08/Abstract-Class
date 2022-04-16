
//Abstraction
#include <iostream>
#define pie 3.14
using namespace std;

class Shape{
    public:
        double lenght,width,radius;
        virtual double parameter()=0; 
};
class Rectangle:public Shape{
    public:
        double parameter()
        {
            return 2*(lenght+width);
        }
};
class Circle:public Shape{
    public:
        double parameter()
        {
            return 2*pie*radius;
        }
};
int main()
{
    Rectangle obj;
    Circle obj1;
    double l,w,r;
    cout<<"Enter Length of Rectangle : ";
    cin>>l;
    cout<<"Enter Width of Rectangle : ";
    cin>>w;
    cout<<"Enter Radius of Circle : ";
    cin>>r;
    obj.lenght=l;
    obj.width=w;
    obj1.radius=r;
    cout<<"Parameter of Rectangle : "<<obj.parameter()<<endl;
    cout<<"Parameter of Circle : "<<obj1.parameter();
    return 0;
}
