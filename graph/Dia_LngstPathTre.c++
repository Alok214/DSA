#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[10001];
int vis[1001];
int maxD,maxN;
void dfs(int nd,int d){
    vis[nd]=1;
    if(d>maxD) maxD=d , maxN=nd;
    for(int x:ar[nd]){
        if(!vis[x]){
            dfs(x,d+1);
        }
    }
}
int main(){
    int n,a,b;
    cin>>n;
    for(int i=1;i<n;i++) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
    maxD=-1;
    dfs(1,0);
    for(int i=1;i<n;i++) vis[i]=0;
    maxD=-1;
    dfs(maxN,0);
    cout<<maxD;
}