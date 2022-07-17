#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 100000
int main(){
    int n;
    cin>>n;
    int a[n];
    int f[max]={0};
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        a[i]=t;
        f[t]++;
    }
    for (int i = 0; i <max; i++)
    {   if(f[i]>0){
         cout<<"freq of "<<i<<" is:"<<f[i]<<endl;
    }   
    }    
}