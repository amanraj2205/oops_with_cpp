#include<iostream>
using namespace std;

class employee{
int code;
string name;
public:
virtual void getdata();
virtual void display();

};

class grade:public employee{
    char grd[90];
    float salary;
    public:
    void getdata();
    void display();
    void show(){
        cout<<"in gread class funcation only"<<endl;
    }
    virtual void amanshow(){
        cout<<"virtual funcation in grad class"<<endl;
    }
};

void employee::getdata(){ }
void employee::display(){ }

void grade::getdata(){
    cout<<"enter employee's grade";
    cin>>grd;
    cout<<"enter the salary";
    cin>>salary;
}

void grade::display(){
cout<<"salary = "<<salary<<endl;
cout<<"Grad = "<<grd<<endl;
}

int main(){
    employee *ptr;
    grade obj;
    ptr=&obj;
    ptr->getdata();
    ptr->display();
    //ptr->show();   not work 
    obj.show();
    //prt->amanshow();  not work
    return 0;
}