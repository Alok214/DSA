#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stock(int a[],int n){
    int pro=0;
    for(int i = 1; i < n; i++){
        if(a[i]>a[i-1]) pro+=(a[i]-a[i-1]);
       }
       return pro;
}
vector<vector<int> > stockBuySell(vector<int> &A, int n){
        int buy = 0,sell = 0;
       vector<vector<int>> ans;
       for(int i = 1; i < n; i++){
           if(A[i] > A[i - 1]){
               sell = i;
           }
           else{
               if(buy != sell){
                   ans.push_back({buy, sell});
               }
               buy = sell = i;
           }
       }
       if(buy != sell){
           ans.push_back({buy , sell});
       }
       return ans;
    }
int main(){
// int n=5;
// int a[n]={5,2,8,3,10};
// int x=0;
// int sum=0;
// for (int i = 0; i < n; i++)
// {
//     if(a[i]>a[i+1] || i==n-1){
//     sum=sum+(a[i]-a[x]);
//     x=i+1;
//     }
// }
// cout<<sum;
int n=7;
vector<int> v{10,18,26,10,4,53,70};
vector<vector<int>> ve=stockBuySell(v,n);
for(auto i:ve){
  for(auto j:i){
      cout<<j<<" ";
  }
  cout<<endl;
}
}

// or

// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
//     vector<vector<int> > stockBuySell(vector<int> A, int n){
//         int buy = 0,sell = 0;
//        vector<vector<int>> ans;
//        for(int i = 1; i < n; i++){
//            if(A[i] > A[i - 1]){
//                sell = i;
//            }
//            else{
//                if(buy != sell){
//                    ans.push_back({buy, sell});
//                }
//                buy = sell = i;
//            }
//        }
//        if(buy != sell){
//            ans.push_back({buy , sell});
//        }
//        return ans;
//     }
// };
// int check(vector<vector<int>> ans, vector<int> A, int p)
// {
//     int c = 0;
//     for(int i=0; i<ans.size(); i++)
//         c += A[ans[i][1]]-A[ans[i][0]];
//     return (c==p) ? 1 : 0;
// }
// int main()
// {   
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> A(n);
//         for (int i=0; i<n; ++i){
//             cin>>A[i];
//         }
//         Solution ob;
//         vector<vector<int> > ans = ob.stockBuySell(A, n);
//         int p = 0;
//         for(int i=0; i<n-1; i++)
//         {
//             int x = A[i+1]-A[i];
//             if(x>0)
//                 p += x;
//         }
//         if(ans.size()==0)
//             cout<<"No Profit";
//         else{
//             cout<<check(ans,A,p);
//         }cout<<endl;
//     }
//     return 0;
// }