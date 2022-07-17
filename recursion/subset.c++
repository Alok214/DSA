#include<bits/stdc++.h>
using namespace std;
// void sub(string s){
//   vector<string> v;
//   int n=s.size();
//   int m=pow(2,n);
//   for (int i = 0; i < m; i++){
//   string k="";
//     for (int j = 0; j < n; j++){
//       if((i&(1<<j))!=0){
//         k+=s[j];
//       }
//     }
//     v.push_back(k);  
//   }
//   sort(v.begin(),v.end());
//   for(auto x:v){
//     cout<<x<<",";
//   } 
// }
int sub(string s,string cur="",int i=0){
 if(i==s.size()){
     cout<<cur<<" ";
     return 0;
     }
    sub(s,cur,i+1);
    sub(s,cur+s[i],i+1);
}
int main(){
  string s;
  cin>>s;
  sub(s,"",0);
}