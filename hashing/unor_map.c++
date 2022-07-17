// hasing implemented by unordered set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<string,int> m;
m["alok"]=21;
m["abhishek"]=26;
m.insert({"ak",20});
for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}