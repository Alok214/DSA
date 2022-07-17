#include<bits/stdc++.h>
using namespace std;
// void mindiff(int a[],int n){
    
// }
int main(){
    int a[4]={8,-1,0,3};
    sort(a,a+4);
    int mn=INT_MAX;
    for(int i=1;i<4;i++){
        int x=a[i]-a[i-1];
        mn=min(x,mn);
    }
    cout<<mn;
}