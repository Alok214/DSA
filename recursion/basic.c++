#include<bits/stdc++.h>
using namespace std;
// void fun(int n){
//     start:
//     if(n==0) return;
//     cout<<n<<" "; 
//     n=n-1;
//     goto start;
// }
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// bool palindrome(string str,int s,int e){
//   if(s>=e){
//       return true;
//   }
//   return (str[s]==str[e] && palindrome(str,s+1,e-1));  
// }
// int sum(int n){
//    if(n==0) return 0;
//    int r=n%10;
//    n=n/10;
//    return r+sum(n);
// }
// int maxCut(int n,int a,int b,int c){
//   if(n==0) return 0;
//   if(n<0) return -1;
//   int res=max(maxCut(n-a,a,b,c),max(maxCut(n-b,a,b,c),maxCut(n-c,a,b,c)));
//   if(res==-1) return -1;
//   return 1+res;
// }
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
int sub(string s){

}
int main(){
  string s;
  cin>>s;
  sub(s);
}