#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<int> p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push(x);
    }
    for(int i=0;i<k;i++){
        cout<<p.top()<<" ";
        p.pop();
    }
}