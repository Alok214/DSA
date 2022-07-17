#include<bits/stdc++.h>
using namespace std;
int fib(int n,int dp[]){
    if(dp[n]==-1){
        int res;
        if(n==0 || n==1){
            return n;
        }
        res=fib(n-1,dp)+fib(n-2,dp);
        dp[n]=res;
    }
    return dp[n];
}
int nfib(int n){
        if(n==0 || n==1){
            return n;
        }
        return nfib(n-1)+nfib(n-2);
}
int tfib(int n){
    int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n=10;
    int dp[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    for(int i=0;i<=n;i++){
       cout<<fib(i,dp)<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
       cout<<nfib(i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
       cout<<tfib(i)<<" ";
    }
}