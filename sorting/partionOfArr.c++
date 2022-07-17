#include<bits/stdc++.h>
using namespace std;
void par(int a[],int l,int r,int p){
    int b[r-l+1];
    int k=l;
    for (int i =l; i <=r; i++) {if(a[i]<a[p]) b[k++]=a[i];}
    for (int i =l; i <=r; i++) {if(a[i]==a[p]) b[k++]=a[i];}
    for (int i =l; i <=r; i++){ if(a[i]>a[p]) b[k++]=a[i];}
    for (int i =l; i <=r; i++){
        cout<<b[i]<<" ";
    }
} // p=pivot
int main(){
    int a[7]={5,13,6,9,11,12,8};
    par(a,0,6,6);
}