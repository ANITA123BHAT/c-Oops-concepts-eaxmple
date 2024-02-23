#include<bits/stdc++.h>
using namespace std;
class Student{   //base class  ... here multiple inheritance happening ..
  protected:
   int rollno;
   
  public:
   Student(){
       cout<<"this is constructor"<<endl;
   }
   ~Student(){
       cout<<"this is destructor"<<endl;
   }
   void set_roll(int a){
       rollno=a;
   }
   void display_roll(){
       cout<<"roll_no:"<<rollno<<endl;
   }
   
   class Student_1{
      private:
       int num;
      public:
       
       void set_num(int a){
           cout<<"......nested class......."<<endl;
       num=a;
   }
   void display_num(){
        cout<<"......nested class......."<<endl;
       cout<<"roll_no:"<<num<<endl;
   }
    
   };
};
class Test: virtual public Student{
    protected:
    float math;
    float science;
    int drawing;
    public:
    void set_marks(float a,float b){
        math=a;
        science=b;
    }
    void display_marks(){
        cout<<"math and science marks"<<endl;
        cout<<math<<" "<<science<<endl;
    }
    void set_marks(int a){
        drawing=a;
        cout<<"drawing scores is:"<<drawing<<endl;
    }
};
class Sports: virtual public  Student{  //child of student class
     protected:
      float score;
     public:
      void set_score(float sc){
          score=sc;
      }
      void print_score(){
          cout<<"sports scores:"<<score<<endl;
      }
};

// class Result doing multiple inheritance from Test and Sports

class Result:public Test, public Sports{   //class Result  inherites the property of both Test and Sports class 
    private:
             float total;
    public:
            void display(){
                total=math+science+score;
                display_roll();
                display_marks();
                print_score();
                cout<<"total scores:"<<" "<<total<<endl;
            }
};
int main(){
Result r1;
Student::Student_1 obj;
obj.set_num(111);
obj.display_num();
r1.set_roll(100);
r1.set_marks(50.0,50.0); //math and science
r1.set_marks(55); //drawing
r1.set_score(99.0);   //sports scores
r1.display();
    return 0;
}
