#include<iostream>
using namespace std;
class car{
    public:
    //virtual void start(){cout<<"car is selected"<<endl;}
    virtual void start()=0; // pure vitual function
};
class innova:public car{
    public:
    void start(){cout<<"Innova is selected"<<endl;}
};
class swift:public car{
    public:
    void start(){cout<<"swift is selected"<<endl;}
};
int main(){
car *p=new innova();
p->start();
p=new swift();
p->start();

}
