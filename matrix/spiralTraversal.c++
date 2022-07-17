#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> a,int r,int c){
 int t=0,l=0,rt=r-1,b=c-1;
   while (l<=rt && t<=b){
    for (int i =l; i <=rt; i++) cout<<a[t][i]<<" "; t++;
    for (int i =t; i<=b; i++) cout<<a[i][rt]<<" "; rt--;
    if(t<=b){for (int i =rt; i>=l; i--) cout<<a[b][i]<<" "; b--;}
    if(l<=rt){for (int i =b; i>=t; i--) cout<<a[i][l]<<" "; l++;}
   }
 
}
int main(){
int m,n;
cin>>m>>n;
vector<vector<int>> a;
for(int i=0;i<m;i++){
  vector<int> v;
    for(int j=0;j<n;j++){
        int x;
        cin>>x; 
      v.push_back(x); 
    }
    a.push_back(v);
}
print(a,m,n);
}