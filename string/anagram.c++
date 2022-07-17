// substring- continuous
// subsequence- may not continuous

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"False";
        return 0;
    }

    // m-1
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    // if(s1==s2){
    //    cout<<"true";
    //     return 0; 
    // } else cout<<"False";

    // m-2
    int count[26]={0};
    for(int i=0;i<s1.size();i++){
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]<0 || count[i]>0){
            cout<<"False";
            return 0;
        }
    }
  cout<<"true";
 return 0;   
}