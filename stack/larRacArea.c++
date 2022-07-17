#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getmaxarea(int a[],int n){
    int res=0;
    for (int i = 0; i <n; i++){
        int cur=a[i];
        for (int j =i-1; j>=0; j--){
        if(a[j]>=a[i]) cur=cur+a[i];
        else break;
        }
        for (int j =i+1; j<n; j++){
        if(a[j]>=a[i]) cur=cur+a[i];
        else break;
        }
        res=max(res,cur);
    }
    cout<<res<<" ";
    
}
int main(){
    int a[7]={6,2,5,4,1,5,6};
    getmaxarea(a,7);
}