// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string txt;
//     cin>>txt;
//     int i=0;
//     string s=txt;
//     sort(txt.begin(),txt.end());
//     do{
//         i++;
//         if(txt==s){
//             cout<<i<<endl;
//             return 0;
//         }
//     }while(next_permutation(txt.begin(),txt.end()));
    
// }

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fac(int n){
    int s=1;
    for(int i=2;i<=n;i++){
        s=s*i;
    }
    return s;
}
     int rank(string s){
    int res=1;
    int n=s.size();
    int mul=fac(n);
    cout<<mul<<endl;
    int ct[256]={0};
    for(int i=0;i<n;i++){
        ct[s[i]]++;
    }
    for(int i=0;i<256;i++){
        ct[i]+=ct[i-1];
    }
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res+ct[s[i]-1]*mul;
        for(int j=s[i];j<256;j++){
        ct[j]--;
    }
    }
    return res;
     }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends