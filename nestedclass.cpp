//a class which is declared in another enclosing class.
#include<iostream>
using namespace std;
class A {
   public:
   class B {
      private:
      int num;
      public:
      void getdata(int n) {
         num = n; 
      }
      void putdata() {
         cout<<"The number is "<<num;
      }
   };
};
int main() {
   
   A :: B obj1;
   obj1.getdata(9);
   obj1.putdata();
   return 0;
}
