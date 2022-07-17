#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void print(vector<vector<int>> a,int r,int c){
// int b[r][c];
// for(int i=0;i<r;i++){
//   for(int j=0;j<c;j++){
//    b[j][i]=a[i][j];
// }
// }
// for(int i=0;i<r;i++){
//   for(int j=0;j<c;j++){
//    cout<<b[i][j]<<" ";
// }
// cout<<endl;
// }
// }

// m-2

void print(vector<vector<int>> a,int r,int c){
for(int i=0;i<r;i++){
  for(int j=i+1;j<c;j++){
   swap(a[i][j],a[j][i]);
}
}
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
   cout<<a[i][j]<<" ";
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