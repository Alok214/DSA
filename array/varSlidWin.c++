#include<iostream>
#include<bits/stdc++.h>
bool subsum(int a[],int n,int sum){
    int cur_sum=a[0],s=0;
    for (int i = 1; i < n; i++)
    {
        while (cur_sum>sum && s<i-1)
        {
           cur_sum-=a[s], s++;
        }
        if(cur_sum==sum) return true;
        if(i<n){
            cur_sum+=a[i];
        }
        }
return (cur_sum==sum);
}
using namespace std;
int main(){
int n=6;
int a[n]={1,8,30,5,10,7};
// n^2
// for (int i = 0; i <n; i++){
//     int sum=0;
//   for (int j = i; j < n; j++)
//   {
//       sum+=a[j];
//       if(sum==52){
//           cout<<"ture";
//           return 1;
//       }
//   }  
// }

// n complexity 
cout<<subsum(a,n,45);

}