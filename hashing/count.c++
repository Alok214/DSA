// count more than n/k
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dist(int a[],int n,int k){
unordered_map<int,int> m;
for (int i = 0; i <n; i++){
   m[a[i]]++;
}
for(auto x:m){
    if(x.second>n/k){
     cout<<x.first<<" ";
    }
}

}
int main(){
int a[]={10,10,5,3,5,5,20,10};
int n=sizeof(a)/sizeof(int);
dist(a,n,4);
}