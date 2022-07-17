#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
bool dfs(int node){
    vis[node]=1;
    for(int cd:ar[node]){
        if(vis[cd]==0){
            if(dfs(cd)==true) return true;
        }
        else if(vis[cd]==1) return true;
    }
    vis[node]=2;
    return false;
}
int main(){
  int n,m,a,b;
  cin>>n>>m;
while(m--){
cin>>a>>b , ar[a].pb(b);
}
cout<<dfs(1);
  
}