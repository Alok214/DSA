#include<bits/stdc++.h>
using namespace std;
void inter(int a[],int b[],int m,int n){
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while (i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]) {i++; continue;}
        if(a[i]<b[j]){i++;}
        if(a[i]>b[j]){j++;}
        if(a[i]==b[j]){cout<<a[i]<<" ";j++;i++;}
    }  
}
int main(){
    int a[5]={3,5,1,7,4};
    int b[5]={8,2,5,1,9};
    inter(a,b,5,5);
}