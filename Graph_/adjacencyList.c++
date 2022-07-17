#include<bits/stdc++.h>
using namespace std;
void adj(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);
}
void print(vector<int> a[],int n){
    for (int i = 0; i <n; i++){
        cout<<i<<"->";
      for(int x:a[i]){
        cout<<x<<",";
      }
      cout<<endl;
    }
 // m-2
//     int i=0;
//    for(auto x:a){
//     cout<<i++<<"->";
//     for(int y:x){
//         cout<<y<<",";
//     }
//     cout<<endl;
//    }
    
}
int main(){
    // int n;
    // cin>>n;
   vector<int> a[5];
   adj(a,0,1);
   adj(a,0,2);
   adj(a,1,3);
   adj(a,2,3);
   adj(a,3,4);
   print(a,5);
   
   
}