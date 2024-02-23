/*#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    void print(){
        cout<<"BASE CLASS print()"<<endl;
    }
    void display(){
        cout<<" BASE CLASS display function "<<endl;
    }
};
class Derived: public Base{
  public:
  void print(){
        cout<<"DERIVED CLASS print()"<<endl;
    }
    void display(){
        cout<<" DERIVED CLASS display function "<<endl;
    }
};
int main(){
    Base *b_ptr;  //base class pointer
    Derived d; //derived class object
    b_ptr=&d;
    b_ptr->print();  
    b_ptr->display();
    return 0;
}*/
//by using virtual keyword that function will not comiled by compiler.
#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
   virtual void print(){
        cout<<"BASE CLASS print()"<<endl;
    }
     virtual void display(){
        cout<<" BASE CLASS display function "<<endl;
    }
};
class Derived: public Base{
  public:
  void print(){
        cout<<"DERIVED CLASS print()"<<endl;
    }
    void display(){
        cout<<" DERIVED CLASS display function "<<endl;
    }
};
int main(){
    Base *b_ptr,b;  //base class pointer
    Derived d; //derived class object
    b_ptr=&d;
    b_ptr->print();  
    b_ptr->display();
    b.display();
    b.print();
    return 0;
}
