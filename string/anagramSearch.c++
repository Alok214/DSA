// substring- continuous
// subsequence- may not continuous

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool angram(string s1,string s2,int j){
int count[256]={0};
    for(int i=0;i<s1.size();i++){
        count[s1[j]-'a']++;
        count[s2[i+j]-'a']--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
  cout<<"true";
}
bool anagramSearch(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    for(int i=0;i<=m-n;i++){
        if(angram(s1,s2,i)) return true;
    }
    return false;
}
// m-2 working
bool same(int ct[],int cp[]){
    for(int i=0;i<256;i++){
        if(ct[i]!=cp[i]) return false;
    }
    return true;
}
bool present(string txt,string pat){
    int n=txt.size();
    int m=pat.size();
    int ct[256]={0},cp[256]={0};
    for(int i=0;i<m;i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=m;i<n;i++){
       if(same(ct,cp)){
           return true;
       }
       ct[txt[i]]++;
       ct[txt[i-m]]--;
    }
    return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    // cout<<anagramSearch(s1,s2);
    cout<<present(s1,s2);
 return 0;   
}