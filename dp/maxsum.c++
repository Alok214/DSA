// maxsum so that no two ele is consecutive
#include<bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n){
    if(n==1) return a[0];
    if(n==2) return max(a[0],a[1]);
    else return max(maxsum(a,n-1),a[n-1]+maxsum(a,n-2));
}
int tmaxsum(int a[],int n){
    if(n==1) return a[0];
    int dp[n+1];
    dp[1]=a[0];
    dp[2]=max(a[0],a[1]);
    for(int i=3;i<=n;i++){
            dp[i]=max(dp[i-1],a[i-1]+dp[i-2]);
    }
    return dp[n];
}
int main(){
    int a[4]={10,5,15,20};
    cout<<maxsum(a,4)<<endl;
    cout<<tmaxsum(a,4)<<endl;
}