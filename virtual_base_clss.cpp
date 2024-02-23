#include<bits/stdc++.h>
using namespace std;
class Student{
    protected:
    int rollno;
  public:
  void set_num(int a){
      rollno=a;
  }
  void print_num(){
      cout<<"roll no is:"<<rollno<<endl;
  }
};
// class Student is a hierachical inheritance 

class Test: virtual public Student{  //child class of student 
    protected:
    float math,english;
    public:
    void set_marks(float m1, float m2){
        math=m1;
        english=m2;
    }
    void print_mark(){
        cout<<"math:"<<math<<endl;
        cout<<"english:"<<english<<endl;
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
                total=math+english+score;
                print_num();
                print_mark();
                print_score();
                cout<<"total scores:"<<" "<<total<<endl;
            }
};

int main(){
    Result obj;
    obj. set_marks(78.8,70.9);
    obj.set_num(101);
    obj.set_score(10);
    obj.display();  //when we call display function it contains all the other class display function 
    return 0;
}s
