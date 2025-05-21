#include <iostream>

using namespace std;

class Test{

    int *p;
    public:
    Test(int size=0){
        p=new int[size];
    }
    //destroy p

    ~Test(){
        cout<<"deleting pointer"<<endl;
        delete []p;
        cout<<"p deleted"<<endl;
    }
};

int main(){
    Test t(5);

    Test *p= new Test(10);
    p=nullptr;
    delete p;
    cout<<"p deleted"<<endl;
    return 0;
}