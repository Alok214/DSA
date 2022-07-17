#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool com(int a,int b){
    return a<=b;
}
int main(){
    int n=9;
    int a[n]={1,2,5,10,20,50,100,500,1000};
    int money=169;
    int ct=0;
    while (money>0)
    {
    int lb=lower_bound(a,a+n,money,com)-a-1;
        //cout<<lb<<" "<<a[lb];
        int m=a[lb];
        money-=m;
        cout<<m<<" ";
        ct++;
    }
    cout<<endl;
    cout<<"Total coins="<<ct;
}
