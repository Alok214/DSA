#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> a,int r,int c,int x){
 int i=0,j=c-1;
   while (i<r && j>=0){
     if(a[i][j]==x){
       cout<<"Found:"<<x<<endl;
       return;
     } 
     else if(a[i][j]>x) j--; 
     else if(a[i][j]<x) i++;
   }
   cout<<"Not Found:"<<x<<endl; 
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
print(a,m,n,78);
}