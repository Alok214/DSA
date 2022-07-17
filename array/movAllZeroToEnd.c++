#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[7]={1,8,0,3,5,0,2};
    int ct=0;
    // for (int i = 0; i < 7; i++)
    // {
    //     if(a[i]!=0){
    //         a[ct++]=a[i];
    //     }
    // }
    // while (ct<7)
    // {
    //     a[ct]=0;
    //     ct++;
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    int f=0,l=0;
    while (f<7)
    {
        if(a[f]==0){
            f++;
        }
        else{
            int t;
            t=a[l];
            a[l]=a[f];
            a[f]=t;
            f++;
            l++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }   
}