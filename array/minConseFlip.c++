#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=8;
int a[n];
int mx=INT_MIN;
for (int i = 0; i < n; i++)
{
  cin>>a[i];
}
int ct0=0,ct1=0;
for (int i = 0; i <n; i++)
{
  if(a[i]==1 && a[i+1]==0 ){
      ct1++;
  } 
  if(a[i]==0 && a[i+1]==1 ){
      ct0++;
  } 
}
if(a[n-2]==0 && a[n-1]==1) ct1++;
if(a[n-2]==1 && a[n-1]==0) ct0++;
cout<<ct0<<" "<<ct1<<endl;
if(ct1>=ct0){
for (int i = 0; i < n; i++)
{ 
    if(a[i]==0){
        cout<<i<<" ";
        a[i]=1;
    }
}
}
if(ct1<ct0){
for (int i = 0; i < n; i++)
{
    if(a[i]==1){
        cout<<i<<" ";
        a[i]=0;
    }
}
}
cout<<endl;
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}

}