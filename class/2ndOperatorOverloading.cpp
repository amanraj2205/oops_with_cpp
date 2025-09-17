#include<iostream>
using namespace std;

class decrement
{
private:
    int m,n;
public:
 
    decrement(){
        m=0;
        n=0;
    }
    void input( ){
        cin>>m;
        cin>>n;
    }
    void show(){
        cout<<m<<endl;
        cout<<n<<endl;
    }
    void operator--(){
        --m;
        --n;
    }
    
};
class increment{
    private:
    int m,n;
    public:

    increment(){
        m=0;
        n=0;
    }
    void input( ){
        cin>>m;
        cin>>n;
    }

    void show(){
        cout<<m<<endl;
        cout<<n<<endl;
    }
    void operator++(){
        ++m;
        ++n;
    }
};
int main(){
    decrement x;
    x.input();
    x.show();
    --x;
    x.show();
    cout<<"for increment"<<endl;
    increment y;
    y.input();
    y.show();
    ++y;
    y.show();

    return 0;
}

