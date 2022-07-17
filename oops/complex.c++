#include<iostream>
using namespace std;
class com{
    private:
    int re;
    int img;
    public:
    com(int r=0,int i=0){
       re=r;
       img=i;
    }
    void dis(){
        cout<<re<<" + i"<<img;
    }
    // com operator+(com x){
    //     com t;
    //   t.re=re+x.re;
    //   t.img=img+x.img;
    //   return t;
    // }  
    // or
    friend com operator+(com c1,com c2);
};
com operator+(com c1,com c2){
    com t;
    t.re=c1.re+c2.re;
    t.img=c1.img+c2.img;
    return t;
}
int main(){
    int r,i;
com c1(5,3),c2(10,5);
com c3;
// c3=c1.add(c2);
c3=c1+c2;
c3.dis();

}