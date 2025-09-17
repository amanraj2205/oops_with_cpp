#include<iostream>
#include<string.h>
using namespace std;

struct intro{
        char name[20];
        int roll_number;
    };


int main(){
    
    
    intro student[10];
    for(int i=0;i<10;i++){
        cout<<"Enter your name: ";
        cin>>student[i].name;
        cout<<"Enter your roll number: ";
        cin>>student[i].roll_number;
    }
    cout<<"You have entered the following details:"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Name of  "<< i <<" student is " << student[i].name << endl;
        cout<<"Roll number of "<< i <<" student is " << student[i].roll_number << endl;
    }

    return 0;
}