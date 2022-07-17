#include<iostream>
using namespace std;
class vol{
private:
int l,b,h;
public:
vol(int le,int br,int ht){
    l=le;
    b=br;
    h=ht;
}
int volu(){
    return l*b*h;
}
};
int main(){
    vol v(2,3,5);
    cout<<v.volu();
}