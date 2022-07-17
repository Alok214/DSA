#include<iostream>
using namespace std;
class stud
{
private:
    int roll;
    string name;
    int mm,pm,cm;
public:
    stud(int roll,string name,int mm,int pm,int cm){
        this->roll=roll;
        this->name=name;
        this->mm=mm;
        this->pm=pm;
        this->cm=cm;
    }
    int total(){
        int t=pm+cm+mm;
        return t;
    }
    void grad(){
        float x=total()/3;
        if(x>=75) cout<<" A"<<endl;
        else if(x>60 && x<75) cout<<" b"<<endl;
        else cout<<" c"<<endl;
    }
};
int main(){
    int r;
    string name;
    int mm,pm,cm;
    cin>>r>>name>>mm>>pm>>cm;
    stud s(r,name,mm,pm,cm);
    cout<<s.total()<<" ";
    s.grad();

}
