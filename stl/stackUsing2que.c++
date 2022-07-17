#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
    //public:
    queue<T> q1,q2;
    public: 
    void push(T x){
        q1.push(x);
    }
    void pop(){
        if(q1.empty()) return;
        while (q1.size()>1)
        {  T ele= q1.front();
            q2.push(ele);
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);
    }
    T top(){
        //if(q1.empty()) return -1;
        while (q1.size()>1)
        {  T ele= q1.front();
            q2.push(ele);
            q1.pop();
        }
        T x=q1.front();
        q1.pop();
        q2.push(x);
        swap(q1,q2);
        return x;
    }
    int size(){
        return q1.size()+q2.size();
    }
    bool empty(){
        return size()==0;
    }
};
int main(){
Stack<int> s;
s.push(1);
s.push(2);
s.push(3);

while (!s.empty())
{
    int x=s.top();
    cout<<x<<" ";
    s.pop();
}


}