#include<iostream>
#include<string.h>
using namespace std;

class father
{
private:
int age;
string name;
string gender;
public:
    void get();
    void show();
};
void father::get(){
 cout<<"enter father name: ";
 cin>>name;
 cout<<"Enter age of fahter: ";
 cin>>age;
 cout<<"Enter father gender";
 cin>>gender;
}

void father::show(){
    cout<<"In my father name is "<<name<<"\n"<<"In my father age is "<<age<<endl;
    cout<<"father gender="<<gender<<endl;
}

class son:public father{
int age;
string name;
string gender;
    public:
void get();
    void show();
    
};
void son::get(){
     cout<<"endaughterson name: ";
 cin>>name;
 cout<<"Enter age of son: ";
 cin>>age;
  cout<<"Enter son gender";
 cin>>gender;
}
void son::show(){
    cout<<"In my son name is "<<name<<"  In my son age is "<<age<<endl;
}

class daughter:public father{

int age;
string name;
string gender;
    public:
    void get();
    void show();
};
void daughter::get(){
    father::get();
    // get();
    // get();
     cout<<"enter daughter name: ";
 cin>>name;
 cout<<"Enter daughter age: ";
 cin>>age;
 cout<<"Enter daughter gender";
 cin>>gender;
}
void daughter::show(){
    cout<<"my father details"<<endl;
    father::show();
    //show();
   
   // show();
    cout<<"In my name is "<<name<<"  In my age is "<<age<<endl;
}

int main(){
    daughter d1;
    son s1;
   d1.get();
   d1.show();

   cout<<"son details is here"<<endl;
   s1.get();
   s1.show();
    return 0;
}


