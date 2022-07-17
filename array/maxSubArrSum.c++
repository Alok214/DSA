// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // kadane's algo
//     int n=8;
//     int subar=0;
//     int mx=INT_MIN;
//  int a[n]={-3,-4,5,-1,2,-4,6,-1};
//  for (int i = 0; i < n; i++){
//   subar=subar+a[i];
//   if(subar<0){
//       subar=0;
//   }
//   mx=max(mx,subar);
//  }
//  cout<<mx;
// }

//2
// long long res = a[0];
        // long long cur_sum = res;
        // for (int i = 1; i < n; i++){
        //     cur_sum = (cur_sum < 0) ? a[i] : cur_sum + a[i];
        //     res = max(res, cur_sum);
        // }
        // return res;


// Circular max subarray sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
    int curSum=0;
    int mx=INT_MIN;
 for (int i = 0; i < n; i++){
  curSum=curSum+a[i];
  if(curSum<0){
      curSum=0;
  }
  mx=max(mx,curSum);
 }
 return mx;
}
int main(){
    int n=7;
    int a[n]={4,-4,6,-6,10,-11,12};
    int cirSum,nonCirSum;
    nonCirSum=kadane(a,n);
    int totalSum=0;
    for (int i = 0; i < n; i++)
    { totalSum+=a[i];
       a[i]=-a[i];
    }
    cirSum=totalSum+kadane(a,n);
    cout<<max(cirSum,nonCirSum);
}