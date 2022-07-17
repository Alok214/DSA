#include<bits/stdc++.h>
using namespace std;
int editdis(string s1,string s2,int m,int n){
    int res;
    if(m==0) return n;
    if(n==0) return m;
    if(s1[m-1]==s2[n-1]) res=editdis(s1,s2,m-1,n-1);
    else res= 1+min(editdis(s1,s2,m,n-1),min(editdis(s1,s2,m-1,n),editdis(s1,s2,m-1,n-1)));
    return res;
}
int teditdis(string s1,string s2,int m,int n){
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){dp[i][0]=i;}
    for(int i=0;i<=n;i++){dp[0][i]=i;}
    // for (int i=0; i <=m; i++){ 
    //    for(int j=0;j<=n;j++){
    //      if(i==0) return j;
    //      else if(j==0) return i;
    //    }
    // }
    for (int i=1; i <=m; i++){ 
       for(int j=1;j<=n;j++){
         if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
         else dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
       }
    }
  return dp[m][n];
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<editdis(s1,s2,s1.length(),s2.length())<<endl;
    cout<<teditdis(s1,s2,s1.length(),s2.length())<<endl;
}