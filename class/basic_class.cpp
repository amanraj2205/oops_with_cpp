#include<iostream>
using namespace std;

class aman{
    private:
    char name[20];
    char enroll[15];
    int marks[6];

    public:
    int sumOfMarks=0;
    int percentage;
    void getDetails();
    // {
    //     cout<<"Enter your name";
    //     cin>>name;
    //     cout<<"Enter enroll. number";
    //     cin>>enroll;

    //     for(int i=0;i<6;i++){
    //         cout<<"Enter marks of"<< i+1 <<"subject";
    //         cin>>marks[i];
    //         sumOfMarks = sumOfMarks+marks[i];
    //     }
    //     percentage=(sumOfMarks*100)/600;

    // }

        void setdata(char n,char e,int m,int p){
         name[20] =n;
         enroll[15]= e;
         marks[6]=m;
         percentage = p;
        }

        void put();
        // {
        //     cout<<"name="<<name<<endl;
        //     cout<<"Enrollerment number="<<enroll<<endl;
        //     for(int i=0;i<6;i++){
        //     cout<<"marks="<<marks[i]<<endl;
        //     }
        //     cout<<"Percentages="<<percentage<<endl;
        // }
    
        
};

void aman::getDetails(){
        cout<<"Enter your name";
        cin>>name;
        cout<<"Enter enroll. number";
        cin>>enroll;

        for(int i=0;i<6;i++){
            cout<<"Enter marks of"<< i+1 <<"subject";
            cin>>marks[i];
            sumOfMarks = sumOfMarks+marks[i];
        }
        percentage=(sumOfMarks*100)/600;

}
void aman::put(){
    cout<<"name="<<name<<endl;
            cout<<"Enrollerment number="<<enroll<<endl;
            for(int i=0;i<6;i++){
            cout<<"marks="<<marks[i]<<endl;
            }
            cout<<"Percentages="<<percentage<<endl;
        }

int main(){
    aman s1;
    s1.getDetails();
    cout<<"your Enter Details "<<endl;
    s1.put();
    return 0;
}