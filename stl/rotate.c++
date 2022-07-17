#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n=5;
    // int a[n]={1,2,5,4,3};
    // rotate(a,a+1,a+n);
    // for (int i = 0; i < 5; i++)
    // {
    //    cout<<a[i]<<" ";
    // }

    // next_permutation

    int n=3;
    int a[n]={1,2,3};
    next_permutation(a,a+n);
    for (int i = 0; i <n; i++){
       cout<<a[i]<<" ";
    }
    
}