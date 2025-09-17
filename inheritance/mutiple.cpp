#include<iostream>
#include<string.h>
using namespace std;

class father
{
private:
int age;
string name;
public:
    void get();
    void show();
};
void father::get(){
 cout<<"enter father name: ";
 cin>>name;
 cout<<"Enter age of fahter: ";
 cin>>age;
}

void father::show(){
    cout<<"In my father name is "<<name<<"In my father age is "<<age<<endl;
}

class mother{
int age;
string name;

    public:
void get();
    void show();
};
void mother::get(){
     cout<<"enter mother name: ";
 cin>>name;
 cout<<"Enter age of mother: ";
 cin>>age;
}
void mother::show(){
    cout<<"In my mother name is "<<name<<"  In my mother age is "<<age<<endl;
}

class daughter:public father,public mother{

int age;
string name;

    public:
    void get();
    void show();
};
void daughter::get(){
    father::get();
    mother::get();
    // get();
    // get();
     cout<<"enter my name: ";
 cin>>name;
 cout<<"Enter your age: ";
 cin>>age;
}
void daughter::show(){
    cout<<"my father details"<<endl;
    father::show();
    //show();
    cout<<"My Mother details"<<endl;
    mother::show();
   // show();
    cout<<"In my name is "<<name<<"  In my age is "<<age<<endl;
}

int main(){
    daughter d1;
   d1.get();
   d1.show();
    return 0;
}


