#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
    int s=0,m=0,e=n-1;
    while (m<=e){
       if(a[m]==0){
           swap(a[s],a[m]);
           m++,s++;
       }
       else if(a[m]==1) m++;
       else{
           swap(a[m],a[e]);
           e--;
       }
    }  
}
int main(){
    int a[7]={0,2,0,1,2,0,1};
    sort(a,7);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}