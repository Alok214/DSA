#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int> p; // max heap
    priority_queue<int,vector<int>,greater<int>> p; // min heap
    // internal strc. of priority Q is implymented by vector
    p.push(3);
    p.push(5);
    p.push(6);
    p.push(1);
    p.push(8);
    while (!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    
}