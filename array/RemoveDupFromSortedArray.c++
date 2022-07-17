#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[9]={1,3,3,5,6,6,6,7,8};
    // vector<int> b;
    // int r=1,l=0;
    // while (r<=9)
    // {
    //     if(a[l]==a[r]){
    //         r++,l++;
    //     }
    //     else{
    //         b.push_back(a[l]);
    //         r++,l++;
    //     }
    // }
    /// for (int i = 0; i <b.size(); i++)
    // {
    //     cout<<b[i]<<" ";
    // }

    // OR
    int c=0;
    int j=0;
    for (int i = 1; i <=9; i++)
    {
        if(a[i]!=a[j]){
            a[c++]=a[j];
        }
        j++;
    }
for (int i = 0; i <c; i++)
    {
        cout<<a[i]<<" ";
    }
    
} 