#include<iostream>
using namespace std;

class baseA{
    public:
    virtual void display(){
        cout<<"One"<<endl;
    }
};
class derivedB{
    public:
    virtual void display(){
     cout<<"Two"<<endl;
    }
};
class derivedC{
    public:
    virtual void display(){
        cout<<"Three"<<endl;
    }
};

int main(){
    baseA objA;
    derivedB objB;
    derivedC objC;
    baseA *ptr[3]; //define an array of pointer to baseA
    ptr[0]=  &objA;
    ptr[1]= (baseA*) &objB;  // converting derivedB* to baseA* this is called downcasting
    ptr[2]=(baseA*)&objC;
    for(int i=0;i<3;i++){
        ptr[i]->display();

    }
    return 0;
}
