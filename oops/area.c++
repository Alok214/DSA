#include<iostream>
using namespace std;
class rec{
    public:
    int l;
    int b;
    int area(){
        return l*b; 
    }
    int per(){
        return 2*(l+b);
    }
};
int main(){
rec r1,r2;
r1.l=4;
r1.b=6;
cout<<r1.area()<<" ";
cout<<r1.per()<<endl;
r2.l=2;
r2.b=8;
cout<<r2.area()<<" ";
cout<<r2.per()<<endl;
}