#include<iostream>
#include<string>
using namespace std;

class firstyear
{
private:
  int age;
  string name;
  int marks; 
public:
  firstyear() : age(0), marks(0) {} // Constructor to initialize
  void get();
  void show();
};

void firstyear::get(){
    cout<<"Enter name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter marks: ";
    cin>>marks;
}
void firstyear::show(){
    cout<<"name is="<<name<<endl;
    cout<<"your age="<<age<<endl;
    cout<<"your marks="<<marks<<endl;
}

class secondyear:public firstyear{
 int now;
 public:
  secondyear() : now(0) {} // Initialize now
  void get();
  void show();
};
void secondyear::get(){
    firstyear::get();
    cout<<"Present in which year: ";
    cin>>now;
}
void secondyear::show(){
    firstyear::show();
    cout<<"present in "<<now<<"year"<<endl;
}

int main(){
    firstyear y1;
    secondyear y2;
    y2.get();
    y2.show();
    return 0;
}
