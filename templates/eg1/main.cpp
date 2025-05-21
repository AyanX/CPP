/* Write a template class Box that stores a single item of any data type and has functions to set and get the item.
 Demonstrate usage with both an int and a std::string. */
#include <iostream>
#include <string>
using namespace std;

template <class B>
class Box{
    B item;

    public:

        Box(B item){
            setter(item);
        }
        void setter(B item){
            this->item=item;
        }
        B getB(){
            return item;
        }
};

int main(){
    Box<int> B(10);
    Box<string> C("made by ayan");

    cout<<B.getB()<<endl;
    cout<<C.getB()<<endl;
}