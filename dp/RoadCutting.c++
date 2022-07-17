#include<bits/stdc++.h>
using namespace std;
int dp[1000]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
int roadCutting(int len[],int n,int s){
    if(s==0) return 0;
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        if(s>=len[i]){
        int sub_res=roadCutting(len,n,s-len[i]);
        if(sub_res!=INT_MIN){
            res=max(res,sub_res+1);
        }
        }
    }
    return res;
}
int main(){
   int len[4]={1,5,2,3};
   int s=5;
   cout<<roadCutting(len,4,s); 
}


// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//   public:
//     int cutRod(int price[], int n) {
//         int dp[n +1] = {0} ;
//         for(int i = 1 ;i <= n ; i++) {
//             int maxcut =0 ;
//             for(int j = 1 ; j <= i ; j++) {
//                 maxcut = max(dp[i-j]+price[j-1], maxcut);
//             }
//             dp[i] = maxcut;
//         }
//         return dp[n] ;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) 
//             cin >> a[i];
//         Solution ob;
//         cout << ob.cutRod(a, n) << endl;
//     }
//     return 0;
// }