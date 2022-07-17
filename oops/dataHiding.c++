#include<iostream>
using namespace std;
class rec{
    private:
    int lt;
    int bd;
    public:
    void setl(int l){
      if(l>0) lt=l;
      else lt=0;
    }
    void setb(int b){
      if(b>0) bd=b;
      else{
          cout<<"Beadth can't be -tive ";
          bd=0;
      }
    }
    int getl(){
        return lt;
    }
    int getb(){
        return bd;
    }
    int area(){
        return lt*bd; 
    }
    int per(){
        return 2*(lt+bd);
    }
};
int main(){
rec r;
r.setb( 2);
r.setl(15);
cout<<r.getb()<<" ";
cout<<r.area();

}