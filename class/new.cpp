// WAP to demostrac funcation overloading by a class by three avg funcation

#include<iostream>
using namespace  std;

class avgfuncation{
    int a,b,c;
    float d;
    public:
    float avg(int a,int b);
    float avg(int a,int b,int c);
   float avg(float a,float b,float d,int e);
   // void dispaly(void);
};
float avgfuncation::avg(int a,int b){
    return ((a+b)/2.0);
}
float avgfuncation::avg(int a,int b,int c){
    float result=(a+b+c)/3.0;
    return result;
}
float avgfuncation::avg(float a,float b,float d,int e){
    float result=(a+b+d+e)/3.0;
    return result;
}

    int main(){
avgfuncation s;
cout<<"avg. of a and b="<<s.avg(12,13)<<endl;
cout<<"avg.of a,b,c="<<s.avg(12,13,23)<<endl;
cout<<"avg of a,b,d="<<s.avg(12.0,13.0,5.0,23)<<endl;

return 0;
}