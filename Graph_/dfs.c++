#include<bits/stdc++.h>
using namespace std;
void adj(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
void dfs(vector<int> a[],int s,vector<bool> &vis){
    vis[s]=true;
    cout<<s<<" ";
        for(int x:a[s]){
            if(!vis[x]){
            dfs(a,x,vis);
        }
        }
}
void disConDfs(vector<int> a[],int n){
    int ct=0;
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
       if(!vis[i]){
        dfs(a,i,vis);
        // vis[i]=true;
        ct++;
       } 
    }
    cout<<"\n"<<"No of disconnected graph = "<<ct<<endl;
}
int main(){
int n=8;
   vector<int> a[n];
   adj(a,0,3);
   adj(a,0,2);
   adj(a,1,3);
   adj(a,2,3);
   adj(a,3,4);
   adj(a,5,6);
   adj(a,6,7);
   adj(a,7,5);
   disConDfs(a,n);    
}