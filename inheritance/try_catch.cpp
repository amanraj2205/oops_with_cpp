#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    try
    {
        if(b==0){
            throw b;
    
        }
        else {
            cout<<a/b<<endl;
        }
    }
    catch(int x)
    {
        cout<<"2nd operand can't be 0"<<endl;
    }
    return 0;
}