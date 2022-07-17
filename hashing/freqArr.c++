// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int freq(vector<int> arr,int n){
   unordered_map<int,int> m;
   for(int x: arr){m[x]++;}
   for(auto y:m) cout<<y.first<<" "<<y.second<<endl;
}
int main(){
// int a[9]={1,2,3,4,5,2,3,7,2};
// int f[10000]={0,0,0,0,0,0,0,0,0,0,0};
// for (int i = 0; i <9; i++){
//     f[a[i]]++;
// }
// for (int i = 0; i <9; i++)
// {
//     if(f[i]>0){
//         cout<<i<<" have freq : "<<f[i]<<endl;
//     }
// }

// m-2
vector<int> arr={1,2,3,4,5,2,3,7,2};
freq(arr,9);
return 0;
}