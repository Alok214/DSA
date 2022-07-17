#include<iostream>
using namespace std;
class base{
    private:
    int lt;
    int br;
    public:
    base(){cout<<"non-par Base "<<endl;}
    base(int x){cout<<"par Base "<<x<<endl;}
};
class der:public base{
  public:
  der(){cout<<"non-par der "<<endl;}
  //der(int y){cout<<"par der "<<y<<endl;}
  der(int x,int y):base(x)
  {cout<<"par der "<<y<<endl;}
};
int main(){
der d(5,10);

}