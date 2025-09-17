#include<iostream>
#include<math.h>
using namespace std;

//float C_I(int p,int n,float r=0.15);
 float value(float p,int n,float r=0.15);

  main(){

  float amount;
  amount = value(1000.00,2);
  cout<<"\n final value="<<amount<<endl;


  
  // float result=C_I(1000,2);
  //   cout<<result<<endl;

}

float value(float p,int n,float r){
    float ci;
    float base=(1+(r/100));
    ci=p*(pow(r+1,n));
    return ci;
  }

  
// float C_I(int p,int n,float r=0.15){
//       // pow(base,exponent);
// float base=(1+(r/100));
//   float amount=p*(pow(base,n));
//   return amount;
// }