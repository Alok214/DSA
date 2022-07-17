#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
void dfs(int x){
    // x=node
    vis[x]=1;
    for(int cd:ar[x]){
        if(!vis[cd]){
            dfs(cd);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
        cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);

    int ct=0;
    for (int i = 1; i <=n; i++)
    {
        if(!vis[i]) dfs(i),ct++;
    }
    
    cout<<ct;
}