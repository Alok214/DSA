#include<bits/stdc++.h>
using namespace std;
int getlis(int a[],int n){
    int lis[n]={0};
    lis[0]=1;
    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){lis[i]=max(lis[i],lis[j]+1);}
        }
    }
    int res=lis[0];
    for(int i=1;i<n;i++){res=max(res,lis[i]);}
    return res;
}
//  m-2
int ceil(int dp[],int l,int r,int x){
while (r>l){
    int m=(l+r)/2;
    if(dp[m]>=x) r=m;
    else l=m+1;
}
return r;
}
//  m-2
int lonicesub(int a[],int n){
  int dp[n];
  dp[0]=a[0];
  int l=1;
  for(int i=1;i<n;i++){
    if(a[i]>dp[l-1]){
        dp[l]=a[i];
        l++;
    }
    else{
        int c=ceil(dp,0,l-1,a[i]);
        dp[c]=a[i];
    }
  }
  return l;
}
// Minimum number of deletions to make a sorted sequence = n-l
// maximum sum incresing
int mslis(int a[],int n){
    int lis[n]={0};
    lis[0]=a[0];
    for(int i=1;i<n;i++){
        lis[i]=a[i];
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){lis[i]=max(lis[i],lis[j]+a[i]);}
        }
    }
    int res=lis[0];
    for(int i=1;i<n;i++){res=max(res,lis[i]);}
    return res;
}
// max length of bitonic subsequence
int bitonic(int nums[],int len){
//    int len = nums.size();
  vector<int> lis(len,1);
  vector<int> lds(len,1);
  for(int i=1;i<len;i++){
      for(int j=0;j<i;j++){
           if(nums[j]<nums[i] && lis[i]<=lis[j]){
               lis[i] = lis[j]+1;
           }
      }
  }
  for(int i = len-2;i>=0;i--){
      for(int j = len-1;j>i;j--){
          if(nums[j]<nums[i] && lds[i]<=lds[j] ){
              lds[i] = lds[j]+1;
          }
      }
  }
  //We are subtracting -1 here because the last number in LIS and LDS will be same, and we do not want to count it twice. 5 in this case.
  int maxV = 0;
  for(int i=0;i<len;i++){
      maxV = max(maxV , lis[i]+lds[i]-1);
  }
  return maxV; 
}

int main(){
    int n=5;
    int a[n]={1,2,5,3,2};
    // cout<<getlis(a,n)<<endl;
    // cout<<lonicesub(a,n)<<endl;
    // cout<<mslis(a,n)<<endl;
    cout<<bitonic(a,n)<<endl;
}