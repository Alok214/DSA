#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="geeksforgeeks";
    int f[26]={0};
    for (int i = 0; i <s.length(); i++){
        f[s[i]-'a']++;
    }
    for (int i = 0; i <26; i++){
        if(f[i]>0){
            cout<<(char)(i+'a')<<" "<<f[i]<<endl;
        }
    }
}