#include<iostream>
using namespace std;

class complex
{
private:
 float real,img;
public:
complex(){
    real=0;
    img=0;
}
complex(float a,float b){
    real=a;
    img=b;
}
void show(){
    cout<<real<<"+i"<<img<<endl;
}
complex operator-(complex &s){
    complex w;
    w.real=real-s.real;
    w.img=img-s.img;
    return w;
}
complex operator*(complex &s){
    complex p;
    p.real=real*s.real;
    p.img=img*s.img;
    return p;
}
complex operator/(complex &s){
complex d;
d.real=real/s.real;
d.img=img/s.img;
return d;
}

};


int main(){
complex s(12,4);
complex l(6,2);
complex a,b,c;
a=s-l;
b=s*l;
c=s/l;
s.show();
l.show();
cout<<"Substraction"<<endl;
a.show();
cout<<"Multiple"<<endl;
b.show();
cout<<"Div"<<endl;
c.show();

    return 0;
}