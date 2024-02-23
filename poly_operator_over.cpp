#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
     Complex(int r=0,int i=0){  //constructor
         real=r;
         imag=i;
     }
     Complex operator + (Complex const &obj){    //here create an operator overloading function by reference 
         Complex res;
         res.imag=imag+obj.imag; //ucrrent imaginary part + object imaginary part 
          res.real=real+ obj.real;
          return res;
     }
     void display(){
         cout<<real<<" +i"<<imag<<endl;
     }
};
int main(){
    Complex c1(12,7);
    Complex c2(6,7);
    Complex c3=c1+c2;
    c3.display();
    
    return 0;
}
s
