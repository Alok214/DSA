// #include<iostream>
// using namespace std;
// class test{
//    private:int a;
//    protected:int b;
//    public:int c;
//    friend void fun();
// };
// void fun(){
//     test t;
//     t.a=10;
//     t.b=3;
//     t.c=5;
//     cout<<t.a;
// }
// int main(){

// }

#include<iostream>
using namespace std;
class exam;
class test{
   private:int a;
   protected:int b;
   public:int c;
   friend exam;
};
class exam{
public:
test t;
void fun(){
    test t;
    t.a=10;
    t.b=3;
    t.c=5;
    cout<<t.c;
}
};
int main(){

}
