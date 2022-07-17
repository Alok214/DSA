#include<bits/stdc++.h>
using namespace std;
float franap(pair<int,int> a[],int n,int w){
sort(a,a+n,[](auto x,auto y){
float a=x.first/x.second;
float b=y.first/y.second;
return a>b;});
float cur_w=w;
float profit=0;
for(int i=0;i<n;i++){
   if(a[i].second<=cur_w){
     cur_w=cur_w-a[i].second;
     profit+=a[i].first;
   } 
   else{
    profit+=a[i].first*(float)(cur_w/a[i].second);
    break;
   }
}
return profit;
}
int main(){
    int n,w;
    cin>>n>>w;
    pair<int,int> arr[n];
    // {{600,50},{500,20},{400,30}};
    for(int i=0;i<n;i++){
			cin>>arr[i].first>>arr[i].second;
		}
    // float w=70;
    cout<<franap(arr,3,w);
}