#include<bits/stdc++.h>
using namespace std;
class student{
  int roll;
  int mark;
  public:
   student(int m,int n){   //parameterized constructor  
       roll=m;
       mark=n;
   }
   student (student &t);  //copy constructor
   void show_data(){
       cout<<"rollno:"<<roll;
       cout<<"mark:"<<mark;
   }
};
student :: student(student &t){ //defining the copy constructor
    roll=t.roll;
    mark=t.mark;
}
int main(){
    cout<<"parameterized constructor:"<<endl;
    student r(10,20); //r is an object
    r.show_data();
    cout<<"\n"<<"copy constructor"<<endl;
    student stu(r);
    stu.show_data();
    return 0;
}
/*
#include<bits/stdc++.h>
class copy{
    int var;
    public:
     copy(int temp){
         var=temp;
     }
     int calculate(){
         int fact,i;
         fact=1;
         for(int i=1;i<=var;i++){
             fact=fact*i;
         }
         return fact;
     }
};
int main(){
    int n;
    std::cin>>n;
    copy obj1(n);  //passing value by using obj  default constructor
     copy obj2=obj1;
     std::cout<<"before copy :"<<obj1.calculate()<<std::endl;
     std::cout<<"after coping"<<obj2.calculate()<<std::endl;
    return 0;
}

*/
