#include<iostream>
#include<string.h>
using namespace std;

class firstyear
{
protected:
  int age;
  string name;
  int marks; 
public:
void get();
void show();
};

// void firstyear::get(){
//     cout<<"Enter name"<<endl;
//     cin>>name;
//     cout<<"Enter age"<<endl;
//     cin>>age;
//     cout<<"Enter marks"<<endl;
//     cin>>marks;
// }
// void firstyear::show(){
//     cout<<"name is="<<name<<endl;
//     cout<<"your age="<<age<<endl;
//     cout<<"your marks="<<marks<<endl;
// }

class secondyear:protected firstyear{
 int now;
 public:
 void get();
 void show();
};
void secondyear::get(){
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter age"<<endl;
    cin>>age;
    cout<<"Enter marks"<<endl;
    cin>>marks;
    cout<<"Enter your present year"<<endl;
    cin>>now;
}
    

void secondyear::show(){
    cout<<"name is="<<name<<endl;
    cout<<"your age="<<age<<endl;
    cout<<"your marks="<<marks<<endl;
    cout<<"present in "<<now<<" year"<<endl;
}

int main(){
firstyear y1;
secondyear y2;
y2.get();
y2.show();

}