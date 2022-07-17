#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
int dis[1001];
void dfs(int node,int d){
    vis[node]=1;
    dis[node]=d;
    for(int cd:ar[node]){
        if(vis[cd]==0){
            dfs(cd,dis[node]+1);
        }
    }
}
int main(){
    int n,q,a,b;
    // q= no of girls , n=node
    cin>>n;
    for (int i = 1; i <=n-1; i++)
        cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
// source vertex=1 and dis=0
dfs(1,0);
cout<<dis[8]<<endl;
cin>>q;
int ans=-1,mindis=INT_MAX;
while (q--)
{
    int gcity;
    cin>>gcity;
    if(dis[gcity]<mindis){
        mindis=dis[gcity];
        ans=gcity;
    }
    else if(dis[gcity]==mindis && gcity<ans){
        ans=gcity;
    }
}
cout<<ans;
}