#include<iostream>
using namespace std;
class rec{
    private:
    int lt;
    int br;
    public:
    rec(int lt,int br){
        this->lt=lt; //this pointing to object lt,br(private)
        this->br=br;
    }
    int area(){
        return lt*br; 
    }
};
int main(){
rec r(3,4);
cout<<r.area()<<" ";
}