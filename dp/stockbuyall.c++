#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stock(int a[],int n){
    int pro=0;
    for(int i = 1; i < n; i++){
        if(a[i]>a[i-1]) pro+=(a[i]-a[i-1]);
       }
       return pro;
}
int main(){
    int a[6]={1,4,2,6,8,7};
    cout<<stock(a,6);
}