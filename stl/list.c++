#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> l{1,23,6,7};
    // for(auto x:l){
    //     cout<<x<<" ";
    // }
    // auto it=l.begin();
    // it++;
    // it++;
    // l.insert(it,33);
    // cout<<endl;
    // for(auto x:l){
    //     cout<<x<<" ";
    // }
    // auto i=l.begin();
    // i++;
    // i++;
    // l.erase(i);
    // cout<<endl;
    // for(auto x:l){
    //     cout<<x<<" ";
    // }

    list<pair<int,int>> *l;
    int n;
    cin>>n;
    l=new list<pair<int,int>> [n];
    int e;
    cin>>e;
    for (int i = 0; i < e; i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        l[x].push_back({y,w});
        l[y].push_back({x,w});
    }
    
    for (int i = 0; i < n; i++)
    {   cout<<i<<"->";
        for (auto node:l[i])
        {
            cout<<"("<<node.first<<","<<node.second<<")";
        }
        cout<<endl;
    }
    


}
