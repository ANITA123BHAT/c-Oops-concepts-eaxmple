#include<bits/stdc++.h>
using namespace std;
class College{
    public:
    void fun(){
        cout<<"I am function"<<endl;
    }
    void fun(int x){
        cout<<"function with int args"<<endl;
    }
    void fun(double x){
        cout<<"function with double args"<<endl;
    }
};
int main(){
    College  obj;
    obj.fun();
    obj.fun(4);
    obj.fun(3.142);
    return 0;
}
//Linux Command Line interface: https://learning.oreilly.com/playlists/dc647671-7e8a-4a80-baa7-6ebf29c35392/

