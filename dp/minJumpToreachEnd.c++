#include<bits/stdc++.h>
using namespace std;
// int minjump(int a[],int n){
//     if(n==1) return 0;
//     int res=INT_MAX;
//     for(int i=0;i<=n-2;i++){
//         if(i+a[i]>=n-1){
//             int sub_res=minjump(a,i+1);
//             if(sub_res!=INT_MAX){
//                 res=min(res,sub_res+1);
//             }
//         }
//     }
//     return res;
// }
int minjump(int a[],int n){
     int dp[n];dp[0]=0;
    for(int i=1;i<n;i++) dp[i]=INT_MAX;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
             if(j+a[j]>=i){
                if(dp[j]!=INT_MAX){
                    dp[i]=min(dp[i],dp[j]+1);
                }
             }
        }
    }
    return dp[n-1];
}
int main(){
   int coin[6]={3,0,0,1,2,1};
   cout<<minjump(coin,6); 
}
