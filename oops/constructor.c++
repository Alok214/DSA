#include<iostream>
using namespace std;
class rec{
    private:
    int lt;
    int br;
    public:
    // rec(){
    //     lt=1;
    //     br=1;
    // }
    rec(int l=1,int b=1){
        setl(l);
        setb(b);
    }
    rec(rec &r){
        lt=r.lt;
        br=r.br;
    }
    void setl(int l){
      if(l>0) lt=l;
      else lt=0;
    }
    void setb(int b){
      if(b>0) br=b;
      else{
         // cout<<"Beadth can't be -tive ";
          br=0;
      }
    }
    int getl(){
        return lt;
    }
    int getb(){
        return br;
    }
    int area(){
        return lt*br; 
    }
    int per();
    bool sq();
  // inline bool sq();  -> to make inline
};
int rec::per(){  // scope resolution
        return 2*(lt+br);
    } 
bool rec::sq(){
    if(lt==br) {
        cout<<"YES + ";
         return true;
    }
    else return false;
}
int main(){
rec r(3,3);
rec r2(r);
// r.setb( 2);
// r.setl(15);
//cout<<r.getb()<<" ";
cout<<r2.area()<<" ";
cout<<r2.per()<<endl;
cout<<r2.sq();

}