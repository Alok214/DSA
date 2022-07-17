#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> & in){
    sort(in.begin(),in.end());
    vector<vector<int>> res;
    int s=in[0][0];
    int e=in[0][1];
    for(auto i:in){
        if(i[0]>e){
            res.push_back({s,e});
            s=i[0];
            e=i[1];
        }
        else{
            e=max(s,e);
        }
    }
    res.push_back({s,e});
    return res;
}
int main(){
vector<vector<int>> v={{1,3},{2,6},{7,9},{10,13}};
meege(v);
}