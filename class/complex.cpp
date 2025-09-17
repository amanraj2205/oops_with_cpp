#include<iostream>
using namespace std;

class complex{
    private:
    float x;
    float y;

    public:
    void input();
    void show();
  friend complex sum(complex c1,complex c2);

};

void complex::input(){
    cout<<"Enter real part"<<endl;
    cin>>x;
    cout<<"Enter imagnary part"<<endl;
    cin>>y;
}
 
void complex::show(){
    cout<<x<<"+i"<<y<<endl;
}
//  complex complex::sum(complex c){  
//     complex result;
//     result.x = this->x + c.x;  
//     result.y = this->y + c.y;  
//     return result;
// }
complex sum(complex c1, complex c2){
  complex c3;
  c3.x=c1.x+c2.x;
  c3.y=c1.y+c2.y;
  return c3;
}

int main(){
 complex c1,c2,c3;
 complex c;


  c1.input();
  c1.show();
  cout<<"Enter number in 2nd complex number"<<endl;
  c2.input();
  c2.show();
 c3 = sum(c1,c2);
cout<<"Sum of two compelx number\n";
  c3.show();
  

    return 0;
}