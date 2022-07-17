#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
int n,m;
int vis[100][100];
int ar[100][100];
bool isval(int x,int y){
    if(x<1 || x>n || y<1 || y>m) return false;
    if(vis[x][y]==true || ar[x][y]=='#') return false;
    return true;
}
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
void grid(int x,int y){
 vis[x][y]=1;
//  cout<<x<<" "<<y<<endl;
//  if(isval(x-1,y))
//      grid(x-1,y);
//  if(isval(x,y+1))
//       grid(x,y+1);
// if(isval(x+1,y))
//       grid(x+1,y);
// if(isval(x,y-1))
//       grid(x,y-1); 
for (int i = 0; i < 4; i++)
{
    if(isval(x+dx[i],y+dy[i])){
        grid(x+dx[i],y+dy[i]);
    }
}
   
}
int main(){
    cin>>n>>m;
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=m; j++){
        cin>>ar[i][j];
    }
    }
    int ct=0;
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=m; j++){
          if(!vis[i][j] && ar[i][j]=='.'){
              ct++;
               grid(i,j);
          }
    }
    }
cout<<ct;
    
}