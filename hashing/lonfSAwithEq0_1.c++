// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fsum(int a[],int n){
    int res=0;
for (int i = 0; i <n; i++){
    int c0=0,c1=0;
   for (int j = i; j <n; j++){
   if(a[j]==0){
       c0++;
   }
   if(a[j]==1){
        c1++;
   }
   if(c0==c1){
       res=max(res,j-i+1);
   }
}
}
return res;
}
// m-2
int sumZero(int a[],int n,int key){
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
int a[]={1,0,1,1,1,0,0};
int n=sizeof(a)/sizeof(int);
cout<<fsum(a,n)<<endl;
cout<<sumZero(a,n,0);
return 0;
}