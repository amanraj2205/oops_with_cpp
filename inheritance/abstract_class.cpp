#include<iostream>
using namespace std;

class base{
    public:
    virtual void show()=0;
};

class Derived:public base{
public:
void show(){
    cout<<"Impletion of virtual funcation in Derived class";
}
};

int main(){
   // base obj;  // Abstact class 0 momery allocation therefor object is not certed of this class, becuse during object delecaration memroy allocation of class is happen
    base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}