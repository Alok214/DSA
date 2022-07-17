#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> a,int m,int n){
for(int i=0;i<m;i++){
    if(i%2==0){
      for(int j=0;j<n;j++){
      cout<<a[i][j]<<" "; 
    }
    }  
   else{
      for(int j=n-1;j>=0;j--){
      cout<<a[i][j]<<" "; 
    }  
    }
    cout<<endl;
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