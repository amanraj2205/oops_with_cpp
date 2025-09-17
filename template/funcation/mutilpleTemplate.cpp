#include<iostream>
using namespace std;

template<class T,class U>
T sum(T a,U b){
    return a+b;
}

int main(){
   cout<< sum(2,4)<<endl;
    cout<<sum(2.3,3.3)<<endl;
    return 0;
}