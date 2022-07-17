#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
int dis[1001];
void bfs(int x,int d){
    queue<int> q;
    q.push(x);
    vis[x]=1;
    dis[x]=0;
    while (!q.empty())
    {   int cur=q.front();
        q.pop();
        for(int cd:ar[cur]){
            if(!vis[cd]){
                vis[cd]=1;
                q.push(cd);
                dis[cd]=dis[cur]+1;
            }
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
        cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
    bfs(1,-1);
    cout<<dis[n];
}