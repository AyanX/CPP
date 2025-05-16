#include <iostream>

using namespace std;

class Fun{
    public:
    static int price;

    static int getPrice();
};

int Fun::getPrice(){
    return price;
};

int Fun::price = 50;

int main() {
    // only statics can  be called without creating an object eg static int getPrice()
    cout<<Fun::getPrice()<<endl;
    return 0;
};