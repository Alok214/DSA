#include<bits/stdc++.h>
using namespace std;
// void per(string s){
//    do{
//        cout<<s<<" ";
//    } while (next_permutation(s.begin(),s.end()));
// }
// or
void per(string s,int i=0){
    int n=s.size();
   if(i==n-1){
       cout<<s<<" ";
       return;
   }
   for (int j =i; j <n; j++)
   {
       swap(s[i],s[j]);
       per(s,i+1);
       swap(s[i],s[j]);
   }  
}
int main(){
   per("ABC");
}