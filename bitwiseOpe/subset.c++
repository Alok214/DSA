#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int p=pow(2,n);
    for (int i = 0; i <p; i++){
        cout<<"[";
        for(int j=0;j<n;j++){
           if((i&(1<<j))!=0) cout<<s[j];
        }
        cout<<"],";
    }
    
}
