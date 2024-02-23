#include<bits/stdc++.h>
using namespace std;
class funoverload{
  public:
  int volume(int a){ //volumeof cube
      return (a*a*a);
  }
  double volume(double r,double h){ //volume of cylinder
      return (3.142*r*r*h);
  }
  double volume(double l,double b,double h){
      return (l*b*h);    //volume of cuboid
  }
  
};

int main(){
    funoverload f1;
    cout<<"volume of cube"<<f1.volume(10)<<endl;
    cout<<"volume of cube"<<f1.volume(2.0,3.0)<<endl;
    cout<<"volume of cube"<<f1.volume(5.0,6.0,7.0)<<endl;
    return 0;
}

