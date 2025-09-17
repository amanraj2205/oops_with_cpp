#include<iostream>
using namespace std;

class aman{
    private:
    int a,b,c[10];
    public:
    void input(){
        cout<<"Enter a=";
        cin>>a;
        cout<<"Enter b=";
        cin>>b;
        cout<<"Enter 10 values for array c: ";
        for (int i = 0; i < 10; i++)
        {
            cin>>c[i];
        } 
    }
    

    double sum(int a, int b);
    double sum(int arr[10]);
    float average(int a, int b);  
    float average(int arr[10]);   
};


double aman::sum(int x, int y){
    return x + y;  
}

double aman::sum(int arr[10]) {
    double add = 0;
    for (int i = 0; i < 10; i++)
    {
        add = add + arr[i];
    }
    return add;  
}

float aman::average(int x, int y){
    return sum(x, y) / 2.0; 
}

float aman::average(int arr[10]){
    return sum(arr) / 10.0;  
}

int main(){
    aman s;
    s.input();
    
    
    double sum_ab = s.sum(s.a, s.b);  
    cout << "Sum of a and b = " << sum_ab << endl;
    
    
    double sum_c = s.sum(s.c);
    cout << "Sum of array c = " << sum_c << endl;
    
    // Calculate averages
    cout << "Average of a and b = " << s.average(s.a, s.b) << endl; 
    cout << "Average of array c = " << s.average(s.c) << endl;  
    
    return 0;
}