#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[10001];
int vis[1001];
int cc_sz;
void dfs(int node){
  vis[node]=1;
  cc_sz++;
  for(int x:ar[node]){
      if(!vis[x]){
          dfs(x);
      }
  }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b , ar[a].pb(b),ar[b].pb(a);
    }
    int ct=0;
    int res=1;
    for (int i = 1; i <=n; i++)
    {   
        if(!vis[i]){
            cc_sz=0;
            dfs(i);
            ct++;
            // cout<<cc_sz<<" ";
            res=res*cc_sz;
        }
    }
    cout<<endl<<ct<<" "<<res; 
}