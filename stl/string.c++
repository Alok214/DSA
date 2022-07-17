#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(string s1, string s2)
{
if(s1.length()==s2.length()){
    return s1<s2;
}
else return s1.length()<s2.length();
}
int main(){
int n;
cin>>n;
cin.get();
string s[4];
for(int i=0;i<n;i++){
    getline(cin,s[i]);
}
sort(s,s+n,comp);
cout<<endl;
for(auto x:s) cout<<x<<endl;

// cout<<s[1];
}

