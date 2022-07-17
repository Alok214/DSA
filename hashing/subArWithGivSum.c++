// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n,int key){
for (int i = 0; i <n; i++){
    int sum=0;
   for (int j = i; j <n; j++){
    sum+=a[j];
   if(sum==key) {
    cout<<"Found ";   
    return 1;}
}
}
cout<<"Not Found ";   
return 0;
}
// m-2
int givsum(int a[],int n,int key){
unordered_set<int> s;
int ps=0;  //pre_sum
for(int i=0;i<n;i++){
    ps+=a[i];
    if(s.find(ps-key)!=s.end()) {cout<<"Found "; return 1;};
    if(ps==key) {cout<<"Found "; return 1;};
    s.insert(ps);
}
return 0;
}
int main(){
int a[]={5,8,6,13,3,-1,-2,-2,};
int n=sizeof(a)/sizeof(int);
// cout<<sum(a,n,22)<<endl;
cout<<givsum(a,n,11);
return 0;
}