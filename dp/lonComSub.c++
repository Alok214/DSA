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
int main(){
    string s1,s2;
    cin>>s1>>s2;
    // int n1=s1.size(),n2=s2.size();
    // vector<vector<int>> dp;
    // for(int i=0;i<=n1;i++){
    //     for(int j=0;j<=n2;j++){
    //         dp[i][j]=-1;
    //     }
    // }
    cout<<lcs(s1,s2,s1.length(),s2.length())<<endl;
}