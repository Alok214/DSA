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
// rec r;
// rec *p;
// p=&r;  // p assign r
// p->l=4;
// p->b=6;
// cout<<p->area()<<" ";
// cout<<p->per()<<endl;
// in heap
rec *p=new rec();
p->l=4;
p->b=6;
cout<<p->area()<<" ";
}