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
            throw 'a';
        }
    }
    catch(int x)
    {
        cout<<"Enter number is integer="<<x<<endl;
    }
    catch(double f){
        cout<<"Enter is negative integer="<<f<<endl;
    }
    catch(char s){
        cout<<"Enter number is zero="<<s<<endl;
    }
}

int main(){
    test(1);
    test(-1);
    test(0);
    return 0;
}