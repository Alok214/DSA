#include<bits/stdc++.h>
using namespace std;
bool com(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int actsel(pair<int,int> a[],int n){
     sort(a,a+n,com);
     int res=1;int pre=0;
     for(int i=1;i<n;i++){
        if(a[i].first>=a[pre].second){
            res++;
            cout<<a[pre].first<<" "<<a[pre].second<<endl;
            pre=i;
        }
        
     }
     return res;
}
// int activitySelection(vector<int> start, vector<int> end, int n){
// vector<pair<int,int>> vp;
//         for(int i=0; i<n; i++){
//             vp.push_back(make_pair(start[i], end[i]));
//         }
//         sort(vp.begin(), vp.end(), [](auto x, auto y) {return x.second<y.second;});
//         int pre =0;
//         int ans=1;
//         for(int i=1;i<n;i++){
//             if(vp[i].first>vp[pre].second){
//                 pre=i;
//                 ans++;
//             }
//         }
//         return ans;}
int main(){
    pair<int,int> a[5]={{1,3},{5,8},{2,4},{10,12},{13,15}};
    cout<<actsel(a,5);
}