// variation of lis
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first) return a.second<b.second;
    else return a.first<b.first;
}
int bride(vector<pair<int,int>> v,int n){
    sort(v.begin(),v.end(),comp);
     for(auto x:v){
        cout<<x.first<<","<<x.second<<endl;
    }
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=v[i].second;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
int main(){
    int n=5;
    // int *a[n];
    // for(int i=0;i<n;i++){
    //    a[i]=new int[2];
    // }
    vector<pair<int,int>> v;
    v.push_back({6,2});
    v.push_back({4,3});
    v.push_back({2,6});
    v.push_back({2,3});
    v.push_back({1,5});
    cout<<bride(v,n)<<endl;
}