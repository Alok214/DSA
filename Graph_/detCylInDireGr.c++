#include<bits/stdc++.h>
using namespace std;
void adj(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
bool cycle(vector<int> a[],int s,vector<bool> &vis,vector<bool> &recst){
  vis[s]=true;
  recst[s]=true;
  for(int x:a[s]){
    if(!vis[x]){
        if(cycle(a,x,vis,recst)==true) return true;
    }
    else {
        if(recst[x]==true){
            return true;
        }
    }
  }  
  recst[s]=false;
  return false;
}
bool disConcycle(vector<int> a[],int n){
   vector<bool> vis(n,false);
   vector<bool> recst(n,false);
   for(int i=0;i<n;i++){
    if(!vis[i]){
        if(cycle(a,i,vis,recst)==true) return true;
    }
   } return false;
}
int main(){
int n=8;
   vector<int> a[n];
   adj(a,0,3);
   adj(a,0,2);
   adj(a,1,3);
//    adj(a,2,3);
   adj(a,3,4);
   adj(a,5,6);
   adj(a,6,7);
//    adj(a,7,5);
   cout<<disConcycle(a,n);    
}