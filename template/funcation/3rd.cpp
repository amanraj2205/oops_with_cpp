#include<iostream>
using namespace std;

template<class T>
void print(T a){
    cout<<a<<endl;
}

template<class T>
void print(T a,int b){
    for(int i=0;i<b;i++){
        cout<<a<<endl;
    }
}

int main(){
    print(1);
    print('a');
    print("Aman",2);
    print(4555.44,5);
    return 0;

}