// longest common sum with same span
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fsum(int a[],int b[],int n){
    int res=0;
for (int i = 0; i <n; i++){
    int sum0=0,sum1=0;
   for (int j = i; j <n; j++){
   sum0+=a[j];
   sum1+=b[j];
   if(sum0==sum1){
       res=max(res,j-i+1);
   }
}
}
return res;
}
// m-2
int sumZero(int a[],int b[],int n,int key){
unordered_map<int,int> m;
int ps=0;  //pre_sum
int res=0;
for(int i=0;i<n;i++){
    (a[i]==0)?ps=ps-1:ps+=1;
    if(ps==key) {res=i+1;};
    if(m.find(ps)==m.end()) m.insert({ps,i});
    if(m.find(ps-key)!=m.end()) {
    res=max(res,i-m[ps-key]);
    }  
}
return res;
}
int main(){
int a[]={0,1,0,0,0,0};
int b[]={1,0,1,0,0,1};
int n=sizeof(a)/sizeof(int);
cout<<fsum(a,b,n)<<endl;
// cout<<sumZero(a,b,n,0);
return 0;
}