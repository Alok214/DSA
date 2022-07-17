#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> a,int r,int c){
if(r==1){for(int i=0;i<c;i++){cout<<a[0][i]<<" ";}}
else if(c==1){for(int i=0;i<r;i++){cout<<a[i][0]<<" ";}}
else{
for(int i=0;i<c;i++){cout<<a[0][i]<<" ";}
for(int i=1;i<r;i++){cout<<a[i][c-1]<<" ";}
for(int i=r-2;i>=0;i--){cout<<a[r-1][i]<<" ";}
for(int i=c-2;i>=1;i--){cout<<a[i][0]<<" ";}
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