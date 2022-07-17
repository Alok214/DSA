#include<iostream>
using namespace std;
class emp{
    private:
    int id;
    string st;
    public:
    emp(int i,string s){
       id=i;
       st=s;
    }
    int eid(){return id;} 
    string name(){return st;} 
};
class femp:public emp{
    private:
    int fsal;
    public:
    femp(int i,string s,int fw):emp(i,s){
       fsal=fw;
    }
    int fsalery(){return fsal;}
};
class demp:public emp{
    private:
    int dsal;
    public:
    demp(int i,string s,int dw):emp(i,s){
        dsal=dw;
    }
    int dsalery(){return dsal;}
};
int main(){
femp f(1,"Aman",55000);
demp d(2,"Amandeep",800);
cout<<d.dsalery()<<endl;
cout<<f.fsalery();
}