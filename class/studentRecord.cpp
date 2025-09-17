#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int Total_marks;
    int roll_number;
    float percentage;
    static const int MAX_MARKS = 500;
    
    public:
    void getDetails(){
        cout << "Enter name: ";
        cin>>name;
       // getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter total marks obtained (out of " << MAX_MARKS << "): ";
        cin >> Total_marks;
        
         percentage = (float(Total_marks) / MAX_MARKS) * 100;
    }
    
    void setDetails(string n, int marks, int roll){
        name = n;
        Total_marks = marks;
        roll_number = roll;
        
        percentage = (float(Total_marks) / MAX_MARKS) * 100;
    }
    
    void putDetails() const{
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Total Marks: " << Total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    student s[n];
    
    for(int i = 0; i < n; i++){
        cout << "\nEnter details for student " << (i+1) << endl;
        s[i].getDetails();
    }
    
    cout << "\nStudent Details" << endl;
    for(int i = 0; i < n; i++){
        cout << "\nStudent " << (i+1)  << endl;
        s[i].putDetails();
    }
    
    return 0;
}