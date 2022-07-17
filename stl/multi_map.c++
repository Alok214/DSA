// map use self balencing bst
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
multimap<char,string> m;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    char x;
    string y;
    cin>>x>>y;
    m.insert({x,y});
}
cout<<endl;
auto it= m.find('c');
if(it->second=="cat"){
    m.erase(it);
}
for(auto p:m){
    cout<<p.first<<"->"<<p.second<<endl;
}
// auto it=m.begin();
// m.erase(it);

// auto x=m.lower_bound('b');
// auto y=m.upper_bound('d');
// for(auto z=x;z!=y;z++){
//    cout<<z->first<<"--"<<z->second<<endl; 
// }

}