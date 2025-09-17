#include<iostream>
using namespace std;

inline int vol(int x,int y,int z){
    return (x*y*z);
}
inline int area(int x,int y){
    return x*y;
}
main(){
    int x=23,y=12,z=4;
    // int x,y,z;
    // cout<<"enter your input"<<endl;
    //cin>>x>>y>>z;
    cout<<"volume="<<vol(x,y,z)<<"\n"<<"area="<<area(x,y)<<endl;
   // cout<<"area="<<area(23,12)<<endl;
}
