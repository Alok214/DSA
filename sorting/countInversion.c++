#include<bits/stdc++.h>
using namespace std;
int countAndMerge(int a[],int l,int m,int r){
  int const n1=m-l+1;
  int res=0;
  int const n2=r-m;
  int lt[n1];
  int rt[n2];
  for (int i = 0; i < n1; i++) lt[i]=a[l+i];
  for (int i = 0; i < n2; i++) rt[i]=a[m+1+i];
  int j=0,k=0,n=l;
  while (j<n1 && k<n2){
    if(lt[j]<=rt[k]){
       a[n]=lt[j];
       n++;j++;
    }
    else{
       a[n]=rt[k];
       res=res+(n1-j);
       n++; k++;
    }
  }
  while (j<n1) a[n++]=lt[j++];
  while (k<n2) a[n++]=rt[k++];
  return res;
}
int countIn(int a[],int l,int r){
    int res=0;
    if(r>l){
        int m=(l+r)/2;
        res+=countIn(a,l,m);
        res+=countIn(a,m+1,r);
        res+=countAndMerge(a,l,m,r);
    }
    return res;
}
int main(){
    int a[8]={2,11,8,5,9,13,3,6};
    cout<<countIn(a,0,7);
}