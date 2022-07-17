// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dist(int a[],int n,int k){
for (int i = 0; i <=n-k; i++){
unordered_set<int> s;
   for (int j = i; j <k+i; j++){
     s.insert(a[j]);
   }
   cout<<"1:->"<<s.size()<<endl;
   s.erase(s.begin(),s.end());
}
}
int main(){
int a[]={10,10,5,3,20,5};
int n=sizeof(a)/sizeof(int);
dist(a,n,4);
}