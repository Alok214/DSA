#include<bits/stdc++.h>
using namespace std;
int countsum(int a[],int n,int s){
if(n==0){
return (s==0) ? 1:0;
}
return countsum(a,n-1,s)+countsum(a,n-1,s-a[n]);
}
int tcountsum(int a[],int n,int s){
int dp[n+1][s+1];
    for (int i = 0; i <=n; i++) dp[i][0]=1;
    for (int i = 1; i <=s; i++) dp[0][i]=0;
    
    for (int i =1; i <=n; i++){
          for (int j = 1; j <=s; j++){
             if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
             }else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1]]);
             }
          } 
    }
return dp[n][s];

}
int main(){
    int a[6]={2,3,4,6,1,5};
    cout<<countsum(a,6,7)<<endl;
    cout<<tcountsum(a,6,7);
}