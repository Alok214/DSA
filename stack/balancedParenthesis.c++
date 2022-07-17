#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b){
return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}
bool ispar(string s)
    {
        stack<int> st;
    for(int i=0;i<s.size();i++){
     if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
     else {
         if(st.empty()) {return false;}
         else if(match(st.top(),s[i])==false) {return false;}
         else st.pop();
    }
    }
    if(st.empty()) return true;
    }
int main(){
    stack<int> st;
    string s;
    cin>>s;
    cout<<ispar(s);
}