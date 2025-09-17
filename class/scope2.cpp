#include<iostream>
using namespace std;

class aman{
    private:
    int a, b, c[10];
    
    public:
    void input(){
        cout << "Enter a = ";
        cin >> a;
        cout << "Enter b = ";
        cin >> b;
        cout << "Enter 10 values for array c: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> c[i];
        } 
    }    
    // Function declarations (overloaded functions)
    double sum(int x, int y);
    double sum(int arr[], int size);
    float average(int x, int y);
    float average(int arr[], int size);
    
    // Public methods to access private members and perform calculations
    void calculateAndDisplay(){
        cout << "Sum of a and b = " << sum(a, b) << endl;
        cout << "Sum of array c = " << sum(c, 10) << endl;
        cout << "Average of a and b = " << average(a, b) << endl;
        cout << "Average of array c = " << average(c, 10) << endl;
    }
};

// Function definitions
double aman::sum(int x, int y){
    return x + y;
}

double aman::sum(int arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;  
}

float aman::average(int x, int y){
    return sum(x, y) / 2.0;
}

float aman::average(int arr[], int size){
    return sum(arr, size) / (float)size;
}

int main(){
    aman s;
    s.input();
    s.calculateAndDisplay();
    
    return 0;
}