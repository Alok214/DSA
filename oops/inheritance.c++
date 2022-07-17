#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void show(){
        cout<<x;
    }
};
class derived:public base{
    public:
    int y;
    void dis(){
        cout<<x<<" "<<y;
    }
};
int main(){
base b;
b.x=4;
b.show();
cout<<endl;
derived d;
d.x=5;
d.y=6;
d.dis();
cout<<endl;
d.show();
}