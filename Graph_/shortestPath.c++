#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
void shortDis(vector<int> a[],int n){
    queue<int> q;
    bool vis[n];
    int dis[n];
    q.push(0);
    vis[0]=true;
    dis[0]=0;
    while (!q.empty()){
       int v=q.front();
       q.pop();
       for(int x:a[v]){
        if(!vis[x]){
           dis[x]=dis[v]+1;
           vis[x]=true;
           q.push(x);
        }
       } 
    }
  for(int i=0;i<n;i++){
    cout<<dis[i]<<" ";
  }  
}

int main(){
    int n=8;
  vector<int> adj[5];
  addedge(adj,0,3);
  addedge(adj,0,1);
  addedge(adj,1,2);
  addedge(adj,3,0);
  addedge(adj,2,1);
  addedge(adj,2,4);
   shortDis(adj,5);
   
}