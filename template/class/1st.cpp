//Instance is created by run time "new" keyword is use

#include<iostream>
using namespace std;

template<class T>
class array{
    T *a;
    int n;
    public:
    void getdata(){
        int i;
        cout<<"enter how much number=  ";
        cin>>n;
        a=new T[n];  // Create instance
        for(i=0;i<n;i++){
            cin>>a[i];
        }
    }

    void putdata(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
   void  sorted(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
   }
  // sort(a.begin(),a.end());

};

int main(){
    array <int> a;
    a.getdata();
    cout<<"Enter data"<<endl;
    a.putdata();
    cout<<"sorted data"<<endl;
    a.sorted();
    a.putdata();

    array<float> b;
    b.getdata();
    cout<<"Enter data"<<endl;
    b.putdata();
    cout<<"sorted data"<<endl;
    b.sorted();
    b.putdata();

    return 0;
}

