#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    //m-1
    // stack<string> st;
    // string t=" ";
    // for(int i=0;i<=s.size();i++){
    //     if(s[i]==' ' || s[i]=='\0'){
    //         st.push(t);
    //         t="";
    //     }
    //     else{
    //         t=t+s[i];
    //     }
    // }
    // // st.push(t);
    // while (!st.empty())
    // {   string x=st.top();
    //     cout<<x<<" ";
    //     st.pop();
    // }
    // m-2
    int start=0;
    for(int end=0;end<=n;end++){
       if(s[end]==' ' || s[end]=='\0'){
           reverse(s.begin()+start,s.begin()+end);
           start=end+1;
       }
    }
    reverse(s.begin(),s.end());
    cout<<s;
}