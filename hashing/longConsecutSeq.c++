// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// m-3
int findLongestConseqSubseq(int arr[], int N){
      unordered_set<int> s;
       for(int i = 0; i < N; i++) s.insert(arr[i]);
       int ans = 0;
       for(int i = 0; i < N; i++){
           if(s.count(arr[i]-1)) continue;
           int count = 1, temp = arr[i];
           while(s.count(temp+1)) count++, temp++;
           ans = max(ans, count);
       }
       return ans;
    }


int fsum(int a[],int n){
sort(a,a+n);
int res=0,ct=0;
for (int i = 0; i <n; i++){
   for (int j = i; j <n; j++){
   if(a[j]==a[j-1]+1) {
       ct++;
    } else{
        res=max(res,ct);
        ct=1;
    }
}
}
res=max(res,ct);
return res;
}
// m-2
int sumZero(int a[],int n){
unordered_set<int> s;
int ct=0;  //pre_sum
int res=0;
for(int i=0;i<n;i++){
    s.insert(a[i]);
}
for(int i=1;i<n;i++){
    if(s.find(a[i]-1)==s.end()){
       ct=1;
       while (s.find(a[i]+ct)!=s.end())
       {
           ct++;
       }
       res=max(res,ct);
    }
}
res=max(res,ct);
return res; 
}
int main(){
int a[]={4,1,2,3,7,9,12};
int n=sizeof(a)/sizeof(int);
// cout<<fsum(a,n)<<endl;
cout<<sumZero(a,n);
return 0;
}