#include<bits/stdc++.h>
using namespace std;
// sort array having 2 part of sorted array
void merge(int a[],int l,int m,int r){ 
  int const n1=m-l+1;
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
    else if(lt[j]>rt[k]){
       a[n]=rt[k];
       n++; k++;
    }
  }
  while (j<n1) a[n++]=lt[j++];
  while (k<n2) a[n++]=rt[k++];
}
void mergeSort(int a[],int l,int r){
  int m;
 if(r>l){
     m=(l+r)/2;
     mergeSort(a,l,m);
     mergeSort(a,m+1,r);
     merge(a,l,m,r);
 }
}
int main(){
    int a[5]={13,5,1,4,2};
    mergeSort(a,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int b[5]={10,15,20,5,7};
  merge(b,0,2,4);
  for (int i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    }  
}