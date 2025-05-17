
#include <iostream>

using namespace std;

class CarType;

class Car{
    static int price;
    string carName = "mercedes";
    public:
    friend int getPrice();
    friend CarType;
};

int Car::price = 2000;

class CarType{

    int numberOfCars = 10;
    public:

   int TotalPrice(int x=0){
        Car *p = new Car;
        static int price = p->price;
        delete p;

        price+=x;

        //recur
        if (numberOfCars != 1){
            numberOfCars -=1;
           return TotalPrice(2000);
        }else{
            return price;
        };
            
        
    };
    
    
};

int getPrice(){
    Car *p = new Car;
    int price = p->price;
    delete p;

    return price;
};

int main(){
    cout<<getPrice()<<endl;
    CarType m;
    cout<<m.TotalPrice()<<endl;
    return 0;
};