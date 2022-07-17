#include<bits/stdc++.h>
using namespace std;
int countbst(int n){
    int dp[n+1];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
            dp[i]+=dp[j]*dp[i-j-1];
        }
    }
    return dp[n];
}
// m-2
// catalen no. = 1/(n+1)* 2nCn

int main(){
    int n;
    cin>>n;
    cout<<countbst(n);
}