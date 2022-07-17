#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> a,int r,int c){
   // r==c
// int b[r][c];
// right dir 90 deg
// for(int i=0;i<r;i++){
//   for(int j=c-1;j>=0;j--){
//    b[j][i]=a[i][j];
// }
// }
// for(int i=0;i<r;i++){
//   for(int j=0;j<c;j++){
//    b[c-j-1][i]=a[i][j];
// }
// }
// for(int i=0;i<r;i++){
//   for(int j=0;j<c;j++){
//    cout<<b[i][j]<<" ";
// }

// m-2

for(int i=0;i<r;i++){
  for(int j=i+1;j<c;j++){
   swap(a[j][i],a[i][j]);
}
}
for(int i=0;i<r;i++){
  int l=0,h=r-1;
  while (h>l){
      swap(a[l][i],a[h][i]);
    l++;h--;
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