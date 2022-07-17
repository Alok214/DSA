#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("a");
    q.push("b");
    int n;
    cin>>n;
    for (int i = 0; i <n; i++){
        string cur=q.front();
        cout<<cur<<" ";
        q.pop();
        q.push(cur+"a");
        q.push(cur+"b");
    }
}