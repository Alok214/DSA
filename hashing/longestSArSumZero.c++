// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fsum(int a[],int n,int key){
    int ct=0;
for (int i = 0; i <n; i++){
    int sum=0;
   for (int j = i; j <n; j++){
    sum+=a[j];
   if(sum==key) {
       ct=max(ct,j-i+1);
    }
}
}
return ct;
}
// m-2
int sumZero(int a[],int n,int key){
unordered_map<int,int> m;
int ps=0;  //pre_sum
int res=0;
for(int i=0;i<n;i++){
    ps+=a[i];
    if(ps==key) {res=i+1;};
    if(m.find(ps)==m.end()) m.insert({ps,i});
    if(m.find(ps-key)!=m.end()) {
    res=max(res,i-m[ps-key]);
    }  
}
return res;
}
int main(){
int a[]={3,1,6,-2,8,2,3,6};
int n=sizeof(a)/sizeof(int);
// cout<<fsum(a,n,12)<<endl;
cout<<sumZero(a,n,17);
return 0;
}