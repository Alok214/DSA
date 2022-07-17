#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
int n,m;
int vis[100][100];
bool isval(int x,int y){
    if(x<1 || x>n || y<1 || y>m) return false;
    if(vis[x][y]==true) return false;
    return true;
}
void grid(int x,int y){
 vis[x][y]=1;
 cout<<x<<" "<<y<<endl;
 if(isval(x-1,y))
     grid(x-1,y);
 if(isval(x,y+1))
      grid(x,y+1);
if(isval(x+1,y))
      grid(x+1,y);
if(isval(x,y-1))
      grid(x,y-1);    
}
int main(){
    cin>>n>>m;
    grid(1,1);    
}