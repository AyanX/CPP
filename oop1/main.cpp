#include <iostream>
using namespace std;

class Student{
    int maths,english,chemistry,total;
    string name;
    public:
    
    Student(int maths=0,int english=0,int chemistry=0,string name=""){
        setMaths(maths);
        setEnglish(english);
        setChemistry(chemistry);
        setName(name);
    };
    virtual int getTotal()=0;
    int operator+(int x){
        return maths + x;
    };
    virtual void PrintName(){
        cout<<getName()<<endl;
     };
    string getName(){
        return name;
    };
    int getMaths(){
        return maths;
    };
    int getEnglish(){
        return english;
    };
    int getChemistry(){
        return chemistry;
    };
    void Results();
    void Grading();
    void setName(string name);
    void setMaths(int math);
    void setEnglish(int english);
    void setChemistry(int chemistry);
    
};
void Student::Results(){
    total=(maths+english+chemistry);

    cout<<"Grading system for : "<<name<<endl;
    cout<<"Total marks :"<<total<<endl;

    cout<<"The grade for "<<name<<" is";
    Grading();
};

void Student::Grading(){
    if(total > 250){
        cout<<"A";
    }else if(total >180 && total <240 ){
        cout<<"B";
    }else{
        cout<<"C";
    };
}
void Student::setName(string name){
    this->name=name;
};
void Student::setMaths(int math){
    if(math < 0){
        this->maths=0;
    }else{
        this->maths=math;
    };
};
void Student::setChemistry(int chemistry){
    if(chemistry < 0){
        this->chemistry=0;
    }else{
        this->chemistry=chemistry;
    }; 
};
void Student::setEnglish(int english){
    if(english < 0){
        this->english=0;
    }else{
        this->english=english;
    };  
};

class Mango:public Student{
    public:

    Mango(int maths,int english,int chemistry,string name):Student(maths,english,chemistry,name){
    };

     int getTotal();
     
};
 int Mango::getTotal(){
    cout<<"mango total"<<endl;
    Grading();
    cout<<endl;
    return getMaths()+getEnglish()+getChemistry();
}; 
int main(){
    int maths,english,chemistry;
    string name;
    cout<<"Enter the student's name : ";
    cin>>name;
    cout<<"Enter maths marks : ";
    cin>>maths;
    cout<<"Enter english marks : ";
    cin>>english;
    cout<<"Enter chemistry marks : ";
    cin>>chemistry;

    Student *p = new Mango (maths,english,chemistry,name);
    
    cout<<p->getTotal()<<endl;
    p->PrintName();
    delete p;  //how to delete this
    return 0;
}