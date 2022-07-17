#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
class stack{
public:
int *arr;
int sz;
int top;
stack(int s){
sz=s;
arr= new int[s];
top=-1;
}
void push(int x){
    if(top==sz-1){cout<<"Stack is full"<<endl; return;}
    top++;
    arr[top]=x;
}
int pop(){
    if(top==-1){cout<<"Stack is Empty"<<endl; 
    return 0;}
    int t=arr[top];
    top--;
    return t;
}
int peek(){
    return arr[top];
}
int size(){
    return (top+1);
}
void display(){
    if(top<0){
        cout<<"Nothing to print"<<endl;
        return;
    }
    while (top>=0){
       cout<<arr[top]<<endl;
       top--;
    }
     
}
bool empty(){
return (top==-1);
}
};
int main(){
stack s(5);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
// cout<<s.pop()<<endl;
// cout<<s.size()<<endl;
// cout<<s.peek()<<endl;
// cout<<s.empty()<<endl;  
s.display();
}