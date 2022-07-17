#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// m-1
// void print(int **a,int m,int n){
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout<<a[i][j]<<" "; 
//     }
//     cout<<endl;
// }
// }
// m-2
// void print(int *a[],int m,int n){
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout<<a[i][j]<<" "; 
//     }
//     cout<<endl;
// }
// }
// m-3 
// void print(vector<int> a[],int m,int n){
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout<<a[i][j]<<" "; 
//     }
//     cout<<endl;
// }
// }

// m-4
void print(vector<vector<int>> a,int m,int n){
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" "; 
    }
    cout<<endl;
}
}
int main(){
    // m-1
// int m,n;
// cin>>m>>n;
// int **a;
// a=new int*[m];
// for(int i=0;i<m;i++){
//     a[i]=new int[n];
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cin>>a[i][j]; 
//     }
// }
// print(a,m,n);

// m-2
// int m,n;
// cin>>m>>n;
// int *a[m];
// for(int i=0;i<m;i++){
//     a[i]=new int[n];
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cin>>a[i][j]; 
//     }
// }
// print(a,m,n);

// m-3
// int m,n;
// cin>>m>>n;
// vector<int> a[m];
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x; 
//       a[i].push_back(x); 
//     }
// }
// print(a,m,n);

// m-4
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