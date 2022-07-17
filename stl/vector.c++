#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
int d1=p1.first*p1.first+p1.second*p1.second;
int d2=p2.first*p2.first+p2.second*p2.second;
if(d1==d2) return p1.first<p2.first;
else return d1<d2;
}
int main(){
// vector<int> v{1,2,3,4,5};
// for(int x: v) cout<<x<<" ";
// cout<<endl;
// v.insert(v.begin()+3,2,55);
// for(int x: v) cout<<x<<" ";
// cout<<endl;
// v.erase(v.begin()+3);
// // or v.erase(v.begin()+3,v.begin()+5);
// for(int x: v) cout<<x<<" ";
// cout<<endl;

int n;
cin>>n;
vector<pair<int,int>> v;
for (int i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
}
sort(v.begin(),v.end(),comp);
for(auto t:v) 
cout<<"cars: "<<t.first<<" "<<t.second<<endl;
}