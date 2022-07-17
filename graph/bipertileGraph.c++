#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi ar[1001];
int vis[1001];
int col[1001];
bool dfs(int node,int c){
    vis[node]=1;
    col[node]=c;
    for(int cd:ar[node]){
        if(vis[cd]==0){
            if(dfs(cd,c^1)==false) return false;
        } 
        else if(col[node]==col[cd]) return false;
    }
    return true;
}
int main(){
    int n,m,a,b;
    int tc;
    cin>>tc;
    while (tc--)
    { for(int i=0;i<=n;i++) ar[i].clear() , vis[i]=0;
       cin>>n>>m;
    for (int i = 1; i <=m; i++)
        cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
// source vertex=1 and dis=0
bool flag=true;
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        bool res=dfs(i,0);
        if(res==false) flag=false;
    }
}
if(flag==true) cout<<"No bug";
else cout<<"yes bug"; 
    }
    
    

}