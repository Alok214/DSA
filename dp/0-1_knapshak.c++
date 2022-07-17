#include<bits/stdc++.h>
using namespace std;
int knapshak(int w[],int v[],int n,int gw){
    if(n==0 || gw==0) return 0;
    if(w[n-1]>gw) return knapshak(w,v,n-1,gw);
    else return max(knapshak(w,v,n-1,gw),v[n-1]+knapshak(w,v,n-1,gw-w[n-1]));
}
int tknapshak(int w[],int v[],int n,int gw){
    int dp[n+1][gw+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=gw;j++){
           if(i==0 || j==0) dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=gw;j++){
           if(w[i-1]>j) dp[i][j]=dp[i-1][j];
           else dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
        }
    }
    return dp[n][gw];
}
int main(){
    int n=4;
    int w[4]={5,4,6,3};
    int v[4]={10,40,30,60};
    cout<<knapshak(w,v,4,10)<<endl;;
    cout<<tknapshak(w,v,4,10);
}