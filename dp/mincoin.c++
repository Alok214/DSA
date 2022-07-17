#include<bits/stdc++.h>
using namespace std;
int mincoin(int coin[],int n,int s){
    // if(s==0) return 0;
    // int res=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(s>=coin[i]){
    //     int sub_res=mincoin(coin,n,s-coin[i]);
    //     if(sub_res!=INT_MAX){
    //         res=min(res,sub_res+1);
    //     }
    //     }
    // }
    // return res;

    int dp[s+1];
    for(int i=1;i<=s;i++) dp[i]=INT_MAX;
    dp[0]=0;
    for(int i=1;i<=s;i++){
        for(int j=0;j<n;j++){
             if(i>=coin[j]){
                int sub_res=dp[i-coin[j]];
                if(sub_res!=INT_MAX){
                    dp[i]=min(dp[i],sub_res+1);
                }
             }
        }
    }
return dp[s];
}

// m-2
 int MinCoin(vector<int>nums, int amount){
	vector<int> dp(amount+1,amount+1);
   dp[0] = 0;
   for(int i=0;i<=amount;i++){
       for(int j=0;j<nums.size();j++){
           if(nums[j]<=i){
               dp[i] = min(dp[i],1+dp[i-nums[j]]);
              
           }
       }
   }
   return dp[amount]==amount+1?-1:dp[amount];
	}
int main(){
   int coin[4]={10,5,6,15};
   int s=30;
   cout<<mincoin(coin,4,s); 
}
