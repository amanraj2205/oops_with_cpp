
#include<iostream>
#include<string.h>
using namespace std;

struct intro{
    string name;
    int roll_number;
};

int main(){
    intro str1,str2;
    cout<< "Enter your name: ";
    cin>>str1.name;
    cout<< "Enter your roll number: ";
    cin>>str1.roll_number;
    cout<< "Your name is: " << str1.name << endl;
    cout<< "Your roll number is: " << str1.roll_number << endl;

    cout<<"Enter data in str2"<<endl;
    cout<< "Enter your name: ";
    cin>>str2.name;
    cout<< "Enter your roll number: ";
    cin>>str2.roll_number;
    cout<< "Your name is: " << str2.name << endl;
    cout<< "Your roll number is: " << str2.roll_number << endl;

    return 0;
}