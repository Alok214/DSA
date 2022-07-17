#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n){
  for (int i = 1; i < n; i++)
  { int k=a[i];
    int j=i-1;
    while (j>=0 && a[j]>k)
    {
        a[j+1]=a[j];
        j--;
    } 
    a[j+1]=k; 
  }
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
}
int main(){
    int a[]={3,2,5,1,6};
    insertion(a,5);
}