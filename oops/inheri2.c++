#include<iostream>
using namespace std;
class rec{
    private:
    int le;
    int br;
    public:
    rec(int l=0,int b=0){
        le=l;
        br=b;
    }
    void setl(int l){
        le=l;
    }
    void setb(int b){
        br=b;
    }
    int getl(){
        return le;
    }
    int getb(){
        return br;
    }
};
class cuboid:public rec{
    private:
    int ht;
    public:
    cuboid(int h){
        ht=h;
    }
    int vol(){
        return getl()*getb()*ht; 
        //cout<<v;
    }
};
int main(){
cuboid c(6);
c.setl(2);
c.setb(4);
cout<<c.vol();
}
