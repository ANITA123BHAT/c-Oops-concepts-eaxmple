#include<bits/stdc++.h>
using namespace std;
 class shape{
    
       public:
     shape(){
         cout<<"this is constructor"<<endl;
     }
     ~shape(){
         cout<<"destructor"<<endl;
     }
      
        void setvalue(int a,int b){
            width=a;
            height=b;
        }
        protected:
        int width;
        int height;
 };
    
    class rectangle:public shape{
        public:
        int area(){
            return (width*height);
        } 
    };
    class triangle:public shape{
        public:
        int area(){
            return (width*height)*0.5;
        }
    };
     

    
int main(){
    shape s;
   
   triangle tri;
   rectangle rec;
   tri.setvalue(10,20);
   rec.setvalue(10,20);
   //tri.func();
   cout<<"area of rectangle:"<<rec.area()<<endl;
   cout<<"area of triangle:"<<tri.area()<<endl;
    return 0;
}





