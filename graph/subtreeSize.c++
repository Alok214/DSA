#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
int subsize[1001];
int dfs(int x){
    // x=node
    vis[x]=1;
    int cur_sz=1;
    for(int cd:ar[x]){
        if(!vis[cd]){
            cur_sz+=dfs(cd);
        }
    }
    return subsize[x]=cur_sz;
}
int main(){
    int n,a,b;
    cin>>n;
    for (int i = 1; i <n; i++)
        cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
    dfs(1);
    for(int i=1;i<=n;i++)
    cout<<"Sub tree of "<<i<<" = "<<subsize[i]<<" "<<endl;
}
