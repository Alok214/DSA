// map use self balencing bst
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    m.insert({"mango",60});
    pair<string,int> p;
    p.first="apple";
    p.second=40;
    m.insert(p);
    m["guava"]=30;
    
    string fn;
    // cin>>fn;
    m[fn]+=2;
    auto it = m.find(fn);
    if(it!=m.end()){
    cout<<"The price of "<<fn<<" is "<<m[fn];
    }
    else{
        cout<<fn<<" is not present";
    }
    cout<<endl;
    if(m.count(fn)){
    cout<<"The price of "<<fn<<" is "<<m[fn];
    }
    else{
        cout<<fn<<" is not present";
    }

m["banana"]=20;
m["grape"]=25;
// for(auto it=m.begin(); it!=m.end();it++){
//     //cout<<(*it).first<<" "<<(*it).second<<endl;
//     cout<<it->first<<" "<<it->second<<endl;
// }
for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
}
}