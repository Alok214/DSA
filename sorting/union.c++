#include<bits/stdc++.h>
using namespace std;
void unionOfSA(int a[],int b[],int m,int n){
    int c[m+n];
    for (int i = 0; i <m; i++) c[i]=a[i];
    for (int i = 0; i <n; i++) c[m+i]=b[i];
    sort(c,c+n);
    for (int i = 0; i <m+n; i++){
        if(i==0 || c[i]!=c[i-1]){
            cout<<c[i]<<" ";
        }
    }
    
}
// or
void uni(int a[],int b[],int m,int n){
    // sort(a,a+n);
    // sort(b,b+m);
    int i=0,j=0;
    while (i<m && j<n)
    {
        if(a[i]==a[i-1]) {i++; continue;}
        if(b[j]==b[j-1]) {j++; continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j]){cout<<b[i]<<" ";j++;}
        else {cout<<a[i]<<" ";j++;i++;}  // if(a[i]==b[j])
    }  
    while (i<m) {if(i>0 && a[i]!=a[i-1]){cout<<a[i]<<" ";}}
    while (j<n) {if(j>0 && b[j]!=b[j-1]){cout<<b[j]<<" ";}}
    
}
int main(){
    int a[5]={2,3,3,4,4,};
    int b[2]={4,4};
    // unionOfSA(a,b,5,2);
    uni(a,b,5,2);
}