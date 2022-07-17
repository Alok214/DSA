#include<bits/stdc++.h>
using namespace std;
int lp(int a[],int l,int h){
int pivot=a[h];
int i=l-1;
for (int j =l; j <=h-1; j++)
{
 if(a[j]<=pivot){
     i++;
     swap(a[i],a[j]);
 }
}
swap(a[i+1],a[h]); // for last element
return i+1;
}
void qsort(int a[],int l,int r){
    if(r>l){ // eleiminate single element
        int p=lp(a,l,r);
        // cout<<p<<" ";
        qsort(a,l,p-1);
        qsort(a,p+1,r);
    }
}
int main(){
    int a[7]={34,80,30,90,40,50,70};
    qsort(a,0,6); 
    for(int i=0;i<7;i++){
    cout<<a[i]<<" ";
}

}