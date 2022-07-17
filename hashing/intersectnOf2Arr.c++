// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int> s;
int a[]={2,4,5,6,7,2,4,2};
int b[]={4,7,4};
int n=sizeof(a)/sizeof(int);
int m=sizeof(b)/sizeof(int);

for(int i=0;i<n;i++){
  s.insert(a[i]);
}
int ct=0;
for(int i=0;i<m;i++){
  if(s.find(b[i])!=s.end()){
      ct++;
      s.erase(b[i]);
  }
}
cout<<ct;
return 0;
}