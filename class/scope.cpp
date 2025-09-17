#include<iostream>
using namespace std;

class aman{
    private:
    int a,b,c[10];
    // float avg;
    // int sum;
    public:
   void input(){
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    cout<<"Enter in c";
    for (int i = 0; i < 10; i++)
    {
        cin>>c[i];
    } 
    }
    int sum(int a,int b);
   // double sum(int c[10],int size);
   int sum(int c[10]);
    float avg(int a,int b);
    float avg(int c[10]);
   
    void display(){
        cout<<sum(c[10])<<endl;
        cout<<avg(c[10])<<endl;
    }
};

int aman::sum(int x, int y){
    a=x;
    b=y;
    return a+b;
}
int aman::sum(int c[10]) {
    double add=0;
    for (int i = 0; i < 10; i++)
    {
    add=add+c[i];
    }
    return add;  
 }
float aman::avg(int a,int b){
   return sum(a,b)/2;
}
float aman::avg(int c[10]){
   return sum(c[10],10)/2;
}

int main(){
int x,y;
    aman s;
    // cout<<"input values"
    // cin>>x>>y;
   s.input();
  double add= s.sum(x,y);
  cout<<"sum of a and b="<<add<<endl;
  // double result = s.sum(s.c,10);
   //cout<<"sum of c="<<result<<endl;
   cout<<"Avg of a and b="<<s.avg(x,y)<<endl;

    return 0;
}