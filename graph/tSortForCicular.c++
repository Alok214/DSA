#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100];
vector<int> ans;
int ind[100];
bool topologicalSort(int n){
    // queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i =1; i <=n; i++)
        if(ind[i]==0) q.push(i);
    while (!q.empty())
    {
        int x=q.top();
        ans.push_back(x);
        q.pop();
        for(int c:ar[x]){
            ind[c]--;
            if(ind[c]==0) q.push(c);
        }  
    }
  return ans.size()==n;
    
}
int main(){
int n,m,a,b;
cin>>n>>m;
for (int i =1; i <=m; i++)
{   cin>>a>>b;
    ind[b]++;
    ar[a].push_back(b);
    
}
if(!topologicalSort(n))
cout<<"Invalid\n";
else {
for (int i = 0; i <n; i++)
  {
      cout<<ans[i]<<" ";
  }
}
}