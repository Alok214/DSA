#include<bits/stdc++.h>
using namespace std;
bool sum(int a[],int n,int x){
    sort(a,a+n);
    int s=0,e=n-1;
    while (e>s){
       if(a[s]+a[e]==x) {cout<<"true"; return true;}
       else if(a[s]+a[e]<x){
          s++;
       }
       else 
    //    if(a[s]+a[e]>x){
          e++;
    //    }

    }
    return false;   
}
int main(){
    int a[7]={3,5,9,2,8,10,11};
    // 2 3 5 8 9 10 11
    cout<<sum(a,7,21);
}