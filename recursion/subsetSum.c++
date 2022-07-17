#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n,int sm){
    int ct=0;
  if(n==0){
    return sum==0?1:0;
  }
  return sum(a,n-1,sm)+sum(a,n-1,sm-a[n-1]);
}
int main(){
    int n=3;
    int a[n]={10,20,15};
    cout<<sum(a,n,25);
}