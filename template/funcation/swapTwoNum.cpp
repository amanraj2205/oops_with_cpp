#include<iostream>
using namespace std;
template<class T>
void swapmy(T &x,T &y){
    T z;
    z=x;
    x=y;
    y=z;
}
int main(){
    char ch1,ch2;
    cout<<"Enter two characters";
    cin>>ch1>>ch2;
    swapmy(ch1,ch2);
    cout<<ch1 << "  "<<ch2<<endl;
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    swapmy(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
