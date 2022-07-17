// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumZ(int a[],int n){
for (int i = 0; i <n; i++){
    int sum=0;
   for (int j = i; j <n; j++){
    sum+=a[j];
   if(sum==0) {
    cout<<"Found ";   
    return 1;}
}
}
cout<<"Not Found ";   
return 0;
}
// m-2
int sumZero(int a[],int n){
unordered_set<int> s;
int ps=0;  //pre_sum
for(int i=0;i<n;i++){
    ps+=a[i];
    if(s.find(ps)!=s.end()) {cout<<"Found "; return 1;};
    if(ps==0) {cout<<"Found "; return 1;};
    s.insert(ps);
}
return 0;
}
int main(){
int a[]={11,5,5,-3,-2,8};
int n=sizeof(a)/sizeof(int);
// cout<<sumZ(a,n)<<endl;
cout<<sumZero(a,n);
return 0;
}