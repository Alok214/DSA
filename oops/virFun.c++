#include<iostream>
using namespace std;
class rec{
    public:
    virtual void start(){cout<<"Rec is selected"<<endl;}
    // virtual is used for overriding
};
class cuboid:public rec{
    public:
    void start(){cout<<"Cuboid is selected"<<endl;}
};
int main(){
rec *p=new cuboid();
p->start();

}
