#include<bits/stdc++.h>
using namespace std;
class Encaps{
    private:   //hidden data from outside world
    int total;
  public:
  Encaps(int i=0){   //constructor
     total=i;
  }
  void addnum(int num){  //interface to outside world
      total+=num;
  }
  int get_total(){
      return total;
  }
};
int main(){
    Encaps e1;
    e1.addnum(10);
    e1.addnum(20);
    cout<<"total sum :"<<e1.get_total()<<endl;
    return 0;
}
