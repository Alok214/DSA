#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int a[n]={3,4,3,4,8,4,4,31,7,7};
    int ans=a[0];
    for (int i = 1; i <n; i++)
    {
        ans=ans^a[i];
    }
    // cout<<ans;
     int x=ans^(~(ans-1));
    // cout<<x<<endl;
    // int y=x^ans;
    // cout<<y;
    int r1=0,r2=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]&x!=0) r1=r1^a[i];
        else r2=r2^a[i];
    }
    cout<<r1<<" "<<r2;
}
