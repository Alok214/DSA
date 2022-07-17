#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 100000
int main(){
int n=8;
int a[n];
int f[max]={0};
for (int i = 0; i < n; i++)
{
  cin>>a[i];
  f[a[i]]++;
}
for (int i = 0; i < max; i++)
{
    if(f[i]>=n/2){
        cout<<"Majority element exits and it is "<<i<<" repeats "<<f[i]<<" times";
        return 0;
    }
}
cout<<"Does not exists";
}