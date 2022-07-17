#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void naivesearching(string txt,string pat){
    int n=txt.size();
    int m=pat.size();
    for(int i=0;i<=n-m;i++){
       for(int j=0;j<m;j++){
        if(pat[j]!=txt[i+j]){
            break;
        }
        if(j==m-1){
            cout<<i<<" ";
        }
       }
    }
}
int main(){
    string txt;
    string pat;
    cin>>txt>>pat;
    naivesearching(txt,pat);
}