// substring- continuous
// subsequence- may not continuous

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int l1=0;
    int l2=0;
    while (l1<=n-1 && l2<=m-1)
    {
        if(s1[l1]==s2[l2]){
            l1++; l2++;
        }
        else{
            l1++;
        }
    }
    if(l2==s2.size()){
        cout<<"True";
    }   else {cout<<"False";}
}