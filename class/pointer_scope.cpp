#include<iostream>
using namespace std;

class M{
int x;
int y;
public:
void set_xy(int a,int b){
    x=a;
    y=b;
}
friend int sum(M);
};

int sum(M m){
    int M::*px=&M::x; //pointer to member x
    int M::*py=&M::y; //pointer to member y
    M*pm=&m;
   int s=m.*px+pm->*py;
    return(s);
}


int main(){
 M m;
 void(M::*pf)(int,int)=&M::set_xy;
 //pointer to funcation set_xy(n*pf)(10,20);
 //invokes set_xy
 cout<<"address of m="<<sum(m)<<endl;
 M*op=&m; //point to object n;
(op->*pf)(30,40);
//invokes set_xy
cout<<"sum="<<sum(m)<<endl;
 return 0;
}