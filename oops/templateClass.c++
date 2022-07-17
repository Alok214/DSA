#include<iostream>
using namespace std;
template<class t>
class stack{
    private:
    t *st;
    int top;
    int size;
    public:
    stack(int sz){
        size=sz;
        top=-1;
        st=new t[size];
    }
    void push(t x);
    t pop();
    void dis();
};
template<class t>
void stack<t>::push(t x){
    if(top==size-1) cout<<"Stack is full\n";
    else{
        top++;
        st[top]=x;
    }
}
template<class t>
t stack<t>::pop(){
    t x;
    if(top==-1){cout<<"Stack is Empty\n";}
    else{
        x=st[top];
        top--;
    }
    return x;
}
template<class t>
void stack<t>::dis(){
    int x=top;
    for (int i = 0; i <=x; i++)
    {
      cout<<st[i]<<" ";
    }
    
}
int main(){
stack<int> s(10);
s.push(3);
s.push(5);
s.push(7);
s.push(9);
s.dis();
s.pop();
cout<<endl;
s.push(12);
cout<<endl;
s.dis();
}