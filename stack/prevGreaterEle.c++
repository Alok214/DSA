#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pregreaterele(int a[],int n)
{
    stack<int> s;
    s.push(a[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        while (s.empty()==false && s.top()<=a[i]) {s.pop();}
        int x=(s.empty())?-1:s.top();
        cout<<x<<" ";
        s.push(a[i]);   
    }
}
void nextgreaterele(int a[],int n)
{
    stack<int> s;
    s.push(a[n-1]);
    cout<<"-1"<<" ";
    for(int i=n-2;i>=0;i--){
        while (s.empty()==false && s.top()<=a[i]) {s.pop();}
        int x=(s.empty())?-1:s.top();
        cout<<x<<" ";
        s.push(a[i]);   
    }
}
int main(){
    int a[5]={20,30,10,5,15};
    nextgreaterele(a,5);
}