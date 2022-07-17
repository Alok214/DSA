#include<bits/stdc++.h>
using namespace std;
int meet(int a[],int d[],int n){
    sort(a,a+n);
    sort(d,d+n);
    int i=1,j=0,res=1,ct=1;
    while (i<n && j<n){
        if(a[i]<=d[j]){
            i++; ct++;
        }else{
            ct--; j++;
        }
        res=max(res,ct);
    }
   return res; 
}
int main(){ // a=arrival , d=departure
int a[4]={930,800,1400,1610};
int d[4]={1030,1200,1600,1700};
cout<<meet(a,d,4);
}