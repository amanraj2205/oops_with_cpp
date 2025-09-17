#include<iostream>
using namespace std;

void test(int x){
    try
    {
        if(x==1){
            throw x;
        }
        else if(x==-1){
     throw 3.4;
        }
        else if(x==0){
            throw 'm';
        }
    }
    catch(...)
    {
        cout<<"catch an error"<<endl;
    }
    
}

int main(){
    test(1);
    test(-1);
    test(0);
    return 0;
}