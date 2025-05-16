#include <iostream>

using namespace std;

class Shape{
   public:
   virtual float Perimeter()=0;
   virtual float Area()=0;
};

class Circle:public Shape{
    int radii;
    public:
    Circle(int r=0){
        radii=r;
    };

    float Perimeter(){
        return 3.142 * (2*radii);
    };
    float Area(){
        return 3.142 * radii *radii;
    };
};

class Rectangle:public Shape{

    int length,width;
    public:
    Rectangle(int length=0, int width=0){
        this->length=length;
        this->width=width;
    }

    float Perimeter(){
        return 2*(length+width);
    };
    float Area(){
        return length*width;
    };
};

int main(){

    Shape *s = new Circle(10);
    cout<<"The Perimeter of the circle is : "<<s->Perimeter()<<endl;
    cout<<"The Area of the circle is : "<<s->Area()<<endl;
    s=new Rectangle(10,20);
    cout<<"The Perimeter of the Rectangle is : "<<s->Perimeter()<<endl;
    cout<<"The Area of the Rectangle is : "<<s->Area()<<endl;
    return 0;
};