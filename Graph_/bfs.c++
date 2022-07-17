#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
void bfs(vector<int> a[],int s,bool vis[]){
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int x:a[u]){
            if(vis[x]==false){
                vis[x]=true;
                q.push(x);
            }
        } 
    }
}
void disConBfs(vector<int> a[],int n){
    bool vis[n+1]={false};
    int ct=0;
    for (int i = 0; i < n; i++)
    {
        if(vis[i]==false){
            bfs(a,i,vis);
            ct++;
        }
    }   
     cout<<endl<<"No of dis. grapg="<<ct<<endl;
}
int main(){
    int n=8;
  vector<int> adj[n];
  addedge(adj,0,3);
  addedge(adj,0,2);
  addedge(adj,1,4);
  addedge(adj,1,3);
  addedge(adj,2,3);
  addedge(adj,5,6);
  addedge(adj,6,7);
  addedge(adj,7,5);
  
   disConBfs(adj,8);
   
}