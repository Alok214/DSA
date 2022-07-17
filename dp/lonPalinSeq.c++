#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000]={-1};
int lcs(string s1,string s2,int m,int n){
    if(dp[m][n]!=-1){
  if(m==0 || n==0) dp[m][n]= 0;
  else{
  if(s1[m-1]==s2[n-1]) dp[m][n]= 1+lcs(s1,s2,m-1,n-1);
  else dp[m][n]= max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
  }}
  return dp[m][n];
}
// m-2
int longestPalinSubseq(string s1) {
    int n=s1.size();
    int dp[n+1][n+1];
    string s2=s1;
    reverse(s2.begin(),s2.end());
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
    }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
        else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        }
    }
    return dp[n][n];
    }
int main(){
    string s1="geeksfoegeeks",s2;
    s2=s1;
    reverse(s2.begin(),s2.end());
    cout<<lcs(s1,s2,s1.length(),s2.length())<<endl;
    cout<<longestPalinSubseq(s1);
}