// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int> s;
s.insert(5);
s.insert(45);
s.insert(25);
s.insert(35);
// auto it = s.find(45);  // return itrerator
// cout<<*(it)<<endl;
// s.erase(it);
// cout<<s.count(35)<<endl;// return bool

s.erase(s.begin(),s.end());
s.insert(23);
s.insert(33);
for(int x:s) cout<<x<<" ";
return 0;	
}