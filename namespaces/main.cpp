#include <iostream>

#define first "first"
using namespace std;

namespace First{

    void test(){
        cout<<first<<endl;
    }
};
namespace Second{

    void test(){
        cout<<first<<endl;
    }
};

int main(){

    First::test();
    Second::test();
    return 0;
}