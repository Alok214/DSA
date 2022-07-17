#include<bits/stdc++.h>
using namespace std;
int lastOcc(int a[],int n,int k){
    int s=0,e=n-1;
    int ct=0;
    while (e>=s)
    { int m=(s+e)/2;
       if(k==a[m]){
          if(a[m]!=a[m+1] || m==n-1){
              return m;
          }
          else{
              ct++;
              s=m+1;
          }
       } 
       else if(k>a[m]){
           s=m+1;
       }
       else if(k<a[m]){
           e=m-1;
       }
    }
    return ct;
}
int firOcc(int a[],int n,int k){
    int s=0,e=n-1;
    int ct=0;
    while (e>=s)
    { int m=(s+e)/2;
       if(k==a[m]){
          if(a[m]!=a[m-1] || m==0){
              return m;
          }
          else{
              ct++;
              e=m-1;
          }
       } 
       else if(k>a[m]){
           s=m+1;
       }
       else if(k<a[m]){
           e=m-1;
       }
    }
    return ct;
}
int occ(int a[],int n,int x){
    int first=firOcc(a,n,x);
    if(first==-1) return 0;
    return lastOcc(a,n,x)-first+1;
}
int main(){
 int a[9]={1,3 ,5 ,5, 5, 5, 67, 123, 125};
 cout<<firOcc(a,9,5)<<" "<<lastOcc(a,9,5)<<endl;
cout<<occ(a,9,5);
}