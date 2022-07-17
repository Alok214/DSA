// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool fiind(int a[],int sum,int n){
unordered_set<int> s;
for(int i=0;i<n;i++){
  if(s.find(sum-a[i])!=s.end()){
    cout<<"found"<<endl;
    return true;
  }
  s.insert(a[i]);
}
return false;
}
int main(){
int a[]={11,5,6};
int n=sizeof(a)/sizeof(int);
cout<<fiind(a,10,n);
return 0;
}