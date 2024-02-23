#include<bits/stdc++.h>
using namespace std;
class  Complex{
 // private:
 public:
    int real, imag;
    //public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r, int i){  //parameterized constructor
        real=r;
        imag=i;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    //opeartor overloading
    Complex operator +(Complex c){   //function  here "opeartor" is  a keyword  and  Complex c is an args of same class 
        Complex t;   // object
        t.real=real+c.real;   //here real=(c1.5)+c2.2
        t.imag=imag+c.imag;//imag=(c1.4) c.imag=c2.5
        return t;
    }
};
int main(){
    Complex c1(5,4);
    //object of class Complex
    Complex c2(2,5);
    //default constructor
    Complex c3;
    c3=c1+c2;  //c1.add(c2)
    c3.print();
   
    return 0;
}
