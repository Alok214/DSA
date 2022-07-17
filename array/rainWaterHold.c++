#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int a[n]={5,0,1,2,5};
int sum=0;
int la[n],ra[n];
la[0]=a[0];
for (int i = 1; i <n; i++)
{
    la[i]=max(la[i-1],a[i]);
}
cout<<endl;
ra[n-1]=a[n-1];
for (int i = n-1; i >0; i--)
{
    ra[i-1]=max(ra[i],a[i-1]);
}
for (int i = 0; i < n; i++)
{
    sum=sum+ min(la[i],ra[i])-a[i] ;
}
cout<<sum;
}