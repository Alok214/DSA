#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int b,int e){
int s=0;
    for(int i=b;i<=e;i++){
       s+=a[i];
    }
    return s;
}
int allocation(int a[],int n,int k){
if(k==1) return sum(a,0,n-1);
if(n==1) return a[0];
int res=INT_MAX;
for(int i=1;i<n;i++){
   res=min(res,max(sum(a,i,n-1),allocation(a,i,k-1))); 
}
return res;
}
int main(){
    int a[5]={10,5,12,16,34};
    cout<<allocation(a,5,2)<<endl;
}