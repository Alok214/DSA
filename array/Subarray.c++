#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int sum=0;
    int res=INT_MIN;
 int a[n]={-3,-4,5,-1,2,-4,6,-1};
 for (int i = 0; i < n; i++)
 {
     for (int j = i; j < n; j++)
     { 
        for (int k =i; k <=j; k++)
        {
            sum=sum+a[k];
            res=max(res,sum);
            // cout<<a[k]<<" ";
        }
        sum=0;
        // cout<<endl;
        
     }
 }
 cout<<res;
}

// subarrray with sum 0
// bool subArrayExists(int arr[], int n)
//     {
//         int s=0;
//         unordered_map<int,bool> m;
//         for(int i=0;i<n;i++){
//             s+=a[i];
//             if(s==0 || m[s]==true) return true;
//             m[s]=true;
//         }
//         return false;
//     }