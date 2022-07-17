#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,vector<int>> m;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++){
       string s;
       cin>>s;
       int no;
       cout<<"Enter nos of mob no."<<endl;
       cin>>no;
       for(int j=0;j<no;j++){
           int x;
           cin>>x;
           m[s].push_back(x);
       }
    }
    for(auto p:m){
        cout<<p.first<<" --> ";
        for(auto q:p.second){
            cout<<q<<" ";
        }
        cout<<endl;
    }

}