#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=6;
int a[n]={1,8,30,-5,20,7};
int k=3;
int mx=INT_MIN;
int sum=0;
int sas=45;
for (int i = 0; i <k; i++)
{
  sum+=a[i];  
}
// cout<<sum<<" ";
mx=max(mx,sum);
if(mx==sas){
      return 1;
  }
int l=0;
for (int i =k; i <n; i++)
{
  sum=sum-a[l++]+a[i]; 
  //cout<<sum<<" "; 
  mx=max(mx,sum);
  if(mx==sas){
      cout<<"true";
      return 1;
  }
}
cout<<endl;
// cout<<mx;

}