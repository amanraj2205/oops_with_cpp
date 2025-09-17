#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void get_n(int n){
        cout<<"Enter roll number=";
        cin>>roll_no;
    }
    void put_n(){
        cout<<"Student roll number is "<<roll_no<<endl;
    
    }
    
};
class test: virtual public student{
    protected:
    int test1;
    int test2;
    public:
    void get_t(int x,int y){ 
        cout<<"Enter marks in two test "<<endl;
        cin>>test1;
        cin>>test2;
    }
    void put_t(){
        cout<<"marks in 1st test = "<<test1<<endl;
        cout<<"marks in 2nd test= "<<test2<<endl;
    }
};
class sport: virtual public student{
    protected:
    int score;
    public:
    void get_s(int x){
        cout<<"Enter score in sport = ";
        cin>>score;
    }
    void put_s(){
        cout<<"Scores in sports in "<<score<<endl;
    }
};
class result:public test, public sport{
    private:
    int total;
    public:
    void get();
    void show();
};
 
void result::get(){
    int x=0 , m1=0, m2=0,score=0;
    get_n(x);
    
    get_t(m1,m2);
    get_s(score);
}

void result::show(){
    total=test1+test2+score;
 put_n();
put_t();
put_s();
cout<<"Total score of the student="<<total<<endl;
}


int main(){
    
    student s1;
    test t1;
    sport sp1;
    result r1;
    r1.get();
    r1.show();
    return 0;
}