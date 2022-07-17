#include<bits/stdc++.h>
using namespace std;
void adj(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
int prism(vector<int> a[],int n){
    int key[n],res=0;
    for(int i=0;i<n;i++){
        key[i]=INT_MAX;
    }
    key[0]=0;
    bool mset[n]={false};
    for (int i = 0; i < n; i++){
        int u=-1;
        for(int j=0;j<n;j++){
            if(!mset[i] && (u==-1 || key[i]<key[u])) u=i;
        }
        mset[u]=true;
        res=res+key[u];
        for(int j=0;j<n;j++){
            if(a[u][j]!=0 && !mset[j]){
                key[j]=min(key[j],a[u][j]);
            }
        }
    }
   return res; 
}
int main(){
int n=4;
   vector<int> a[n];
   adj(a,0,1);
   adj(a,0,2);
   adj(a,1,3);
   adj(a,2,3);
   cout<<prism(a,n);    
}