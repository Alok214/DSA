#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
bool cycle(int node,int par){
    vis[node]=1;
    for(int cd:ar[node]){
        if(vis[cd]==0){
            if(cycle(cd,node)==true) return true;
        }
        else if(cd!=par) return true;
    }
    return false;
}
int main(){
  int n,m,a,b;
  cin>>n>>m;
  for (int i =1; i <=m; i++)
cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);

cout<<cycle(1,-1);
  
}