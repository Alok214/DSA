#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    queue<int> q1;
    queue<int> q2;
    int top(){return q1.front();}
    int size(){return q1.size();}
    int front(){return q1.front();}
    void push(int x){
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
       }
       while(!q2.empty()){
           q1.push(q2.front());
           q2.pop();
       }
    } 
};
int main(){
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.front();
    s.size();

}
