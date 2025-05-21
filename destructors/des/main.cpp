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
    return 0;
}