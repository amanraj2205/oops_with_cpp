#include <iostream>
#include <math.h>
using namespace std;

int Interest(int p, int n,int r) {
    return (p*n*r)/100;
}
 double Interest(double p, int n, double r) {
    float base=(1+(r/100));
    return p*(pow(base,n));
}

int main() {
    cout<<"si="<<Interest(1000,2,10)<<endl;
    cout<<"ci="<<Interest(1000.00,2,15.0)<<endl;
    
    return 0;
}