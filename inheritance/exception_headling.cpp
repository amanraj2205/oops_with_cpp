#include<iostream>
using namespace std;

#define MAX 5    // Removed semicolon

class array{
    int a[MAX];
    public:
    int &operator[](int i){   //[] this is operatear index of array  
        if((i<0 || i>=MAX)){
            throw i;
        }
        else{
            cout<<"in array"<<endl;
            return a[i];
        }
    }
};

int main(){
    array arr;
    try {
        arr[1]=5;
        arr[13]=9;
    }
    catch(int x) {
        cout<<"invalid input"<<endl;
        cout<<"out of range"<<endl;
    }
    return 0;
}