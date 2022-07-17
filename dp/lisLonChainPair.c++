// variation of lis
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
int bride(vector<pair<int,int>> v,int n){
    sort(v.begin(),v.end(),comp);
    //  for(auto x:v){
    //     cout<<x.first<<","<<x.second<<endl;
    // }
    int lis[n]={0};
    lis[0]=1;
    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<n;j++){
            if(v[i].first>v[j].second){lis[i]=max(lis[i],lis[j]+1);}
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
    v.push_back({5,24});
    v.push_back({30,60});
    v.push_back({50,90});
    v.push_back({15,28});
    v.push_back({27,40});
    cout<<bride(v,n)<<endl;
}