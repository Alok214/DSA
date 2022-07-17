#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;
class Stack{
public:
vector<int> v;
void push(int x){
   v.push_back(x);
}
int pop(){
   int x=v.back(); 
   v.pop_back();
   return x;
}
int peek(){
    return v.back();
}
int size(){
    return v.size();
}
void display(){
    for(int x:v) cout<<x<<" ";
}
bool empty(){
return v.empty();
}
};
int main(){
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.peek()<<endl;
cout<<s.empty()<<endl;  
// s.display();
}